// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 86

// IEnhancedInputSubsystemInterface @ 14a6cade0

IEnhancedInputSubsystemInterface * __thiscall
IEnhancedInputSubsystemInterface::IEnhancedInputSubsystemInterface
          (IEnhancedInputSubsystemInterface *this)

{
  this->_padding_ = (longlong)&___7IEnhancedInputSubsystemInterface__6B_;
  *(undefined8 *)&this->ForcedActions = 0;
  *(undefined8 *)&(this->ForcedActions).field_0x8 = 0;
  *(undefined8 *)&(this->ForcedActions).field_0x20 = 0;
  *(undefined4 *)&(this->ForcedActions).field_0x28 = 0;
  *(undefined4 *)&(this->ForcedActions).field_0x2c = 0x80;
  *(undefined4 *)&(this->ForcedActions).field_0x34 = 0;
  *(undefined4 *)&(this->ForcedActions).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ForcedActions).field_0x40 = 0;
  *(undefined4 *)&(this->ForcedActions).field_0x48 = 0;
  *(undefined8 *)&this->ForcedKeys = 0;
  *(undefined8 *)&(this->ForcedKeys).field_0x8 = 0;
  *(undefined8 *)&(this->ForcedKeys).field_0x20 = 0;
  *(undefined4 *)&(this->ForcedKeys).field_0x28 = 0;
  *(undefined4 *)&(this->ForcedKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->ForcedKeys).field_0x34 = 0;
  *(undefined4 *)&(this->ForcedKeys).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ForcedKeys).field_0x40 = 0;
  *(undefined4 *)&(this->ForcedKeys).field_0x48 = 0;
  *(undefined8 *)&this->ChordedActionDependencies = 0;
  *(undefined8 *)&(this->ChordedActionDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->ChordedActionDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->ChordedActionDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->ChordedActionDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChordedActionDependencies).field_0x34 = 0;
  *(undefined4 *)&(this->ChordedActionDependencies).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChordedActionDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->ChordedActionDependencies).field_0x48 = 0;
  *(undefined8 *)&this->AppliedContextRedirects = 0;
  *(undefined8 *)&(this->AppliedContextRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->AppliedContextRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->AppliedContextRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->AppliedContextRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->AppliedContextRedirects).field_0x34 = 0;
  *(undefined4 *)&(this->AppliedContextRedirects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AppliedContextRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->AppliedContextRedirects).field_0x48 = 0;
  this->MappingRebuildPending = None;
  this->bIgnoreAllPressedKeysUntilReleaseOnRebuild = true;
  this->bMappingRebuildPending = false;
  this->bControlMappingsRebuiltThisTick = false;
  return this;
}

// ~IEnhancedInputSubsystemInterface @ 14a6cee10

void __thiscall
IEnhancedInputSubsystemInterface::~IEnhancedInputSubsystemInterface
          (IEnhancedInputSubsystemInterface *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IEnhancedInputSubsystemInterface__6B_;
  *(undefined4 *)&(this->AppliedContextRedirects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AppliedContextRedirects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AppliedContextRedirects);
  *(undefined4 *)&(this->ChordedActionDependencies).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChordedActionDependencies).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,TObjectPtr<UInputAction_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,TObjectPtr<UInputAction_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,TObjectPtr<UInputAction_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChordedActionDependencies);
  *(undefined4 *)&(this->ForcedKeys).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ForcedKeys).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ForcedKeys);
  *(undefined4 *)&(this->ForcedActions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ForcedActions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ForcedActions);
  return;
}

// operator() @ 14a6d1400

bool __thiscall
`IEnhancedInputSubsystemInterface::ApplyAxisPropertyModifiers'::__l11::<lambda_1>::operator()
          (void *this,UClass *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)this;
  plVar5 = *(longlong **)(lVar3 + 0x10);
  plVar1 = plVar5 + *(int *)(lVar3 + 0x18);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if (*plVar5 != 0) {
      lVar4 = *(longlong *)(*plVar5 + 0x10);
      iVar2 = (int)param_1->_padding_;
      if ((iVar2 <= *(int *)(lVar4 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
          &param_1->_padding_)) {
        return true;
      }
    }
  }
  plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x20) + 0x60);
  plVar1 = plVar5 + *(int *)(*(longlong *)(lVar3 + 0x20) + 0x68);
  do {
    if (plVar5 == plVar1) {
      return false;
    }
    if (*plVar5 != 0) {
      lVar3 = *(longlong *)(*plVar5 + 0x10);
      iVar2 = (int)param_1->_padding_;
      if ((iVar2 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) ==
          &param_1->_padding_)) {
        return true;
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}

// operator() @ 14a6d1490

void __thiscall
`IEnhancedInputSubsystemInterface::ReorderMappings'::__l2::<lambda_2>::operator()
          (void *this,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  FEnhancedActionKeyMapping *pFVar11;
  longlong lVar12;
  uint uVar13;
  
  iVar7 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar7) {
    lVar12 = 0;
    do {
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar13 = ~uVar10 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar10 < iVar7) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(ulonglong *)((param_1->AllocatorInstance).Data + lVar12 + 0x20);
      uVar8 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        plVar9 = plVar2 + 7;
        if ((longlong *)plVar2[8] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar2[8];
        }
        iVar7 = *(int *)((longlong)plVar9 +
                        (ulonglong)((int)plVar2[9] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
        if (iVar7 != -1) {
          do {
            if (*(ulonglong *)(*plVar2 + (longlong)iVar7 * 0x10) == uVar3) {
              pFVar4 = *(ForAnyElementType **)this;
              uVar8 = 0;
              if ((int)uVar10 < param_1->ArrayNum) {
                uVar8 = uVar13;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar11 = (FEnhancedActionKeyMapping *)
                        ((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x50);
              if ((((FEnhancedActionKeyMapping *)pFVar4->Data <= pFVar11) &&
                  (pFVar11 < (FEnhancedActionKeyMapping *)pFVar4->Data +
                             *(int *)((longlong)&pFVar4[1].Data + 4))) &&
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
              iVar7 = *(int *)&pFVar4[1].Data;
              piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x850,pFVar4,piVar1);
              }
              *(int *)&pFVar4[1].Data = iVar7 + 1;
              FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
                        ((FEnhancedActionKeyMapping *)(pFVar4->Data + (longlong)iVar7 * 0x50),
                         pFVar11);
              uVar8 = 0;
              if ((int)uVar10 < param_1->ArrayNum) {
                uVar8 = uVar13;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                        (param_1,uVar10);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x50,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
              goto LAB_14a6d159c;
            }
            iVar7 = *(int *)(*plVar2 + 8 + (longlong)iVar7 * 0x10);
          } while (iVar7 != -1);
        }
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x50;
LAB_14a6d159c:
      iVar7 = param_1->ArrayNum;
    } while ((int)uVar10 < iVar7);
  }
  return;
}

// operator() @ 14a6d1740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
`IEnhancedInputSubsystemInterface::ShowDebugActionModifiers'::__l8::<lambda_2>::operator()
          (void *this,UInputModifier *param_1,UTexture2D *param_2,FString *param_3)

{
  double dVar1;
  longlong lVar2;
  UCanvas *pUVar3;
  float fVar4;
  uint uVar5;
  FString *pFVar6;
  UFont *pUVar7;
  UClass *pUVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float local_res8 [2];
  float local_res10 [4];
  FName local_res20;
  FString local_a8;
  FLinearColor_u_0 local_98;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78;
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58;
  TVector2<double>_u_0 local_48 [2];
  
  local_88._s_0.X = (double)___xmm_3fe00000000000003fe0000000000000;
  local_88._s_0.Y = _UNK_150689678;
  local_98 = FLinearColor::White.field0_0x0;
  local_78 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
  local_58._s_0.X = **(double **)((longlong)this + 0x20);
  local_58._s_0.Y = (*(double **)((longlong)this + 0x20))[1];
  local_48[0]._0_8_ = **(undefined8 **)((longlong)this + 8);
  local_48[0]._8_8_ = (*(undefined8 **)((longlong)this + 8))[1];
  local_68 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  UCanvas::K2_DrawTexture
            ((UCanvas *)**(undefined8 **)this,(UTexture *)param_2,
             (TVector2<double> *)&local_48[0]._s_0,(TVector2<double> *)&local_58._s_0,
             (TVector2<double> *)&local_68._s_0,(TVector2<double> *)&local_78._s_0,
             (FLinearColor *)&local_98._s_0,BLEND_Translucent,0.0,(TVector2<double> *)&local_88._s_0
            );
  fVar4 = __real_3b808081;
  uVar5 = (uint)FColor::White.field0_0x0._s_0.A;
  lVar2 = *(longlong *)((longlong)this + 0x28);
  fVar12 = (float)FColor::White.field0_0x0._1_1_ * __real_3b808081;
  fVar14 = (float)FColor::White.field0_0x0._0_1_ * __real_3b808081;
  *(float *)(lVar2 + 0x30) = (float)FColor::White.field0_0x0._2_1_ * __real_3b808081;
  *(float *)(lVar2 + 0x34) = fVar12;
  *(float *)(lVar2 + 0x38) = fVar14;
  *(float *)(lVar2 + 0x3c) = (float)uVar5 * fVar4;
  ::FString::FString(&local_a8,L"Final");
  iVar11 = 0;
  if (param_1 != (UInputModifier *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pUVar8 = UInputModifier::StaticClass();
        local_res20 = (FName)pUVar8->_padding_;
        ::FName::ToString(&local_res20,(FString *)&local_98._s_0);
        InputModifierIdentifierEnd = (int)local_98._s_0.B + -1;
        if (local_98._s_0.B == 0.0) {
          InputModifierIdentifierEnd = iVar11;
        }
        if ((void *)local_98._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_98._0_8_);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_res20 = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
    ::FName::ToString(&local_res20,(FString *)&local_98._s_0);
    ::FString::Mid((FString *)&local_98._s_0,(FString *)&local_88._s_0,InputModifierIdentifierEnd,10
                  );
    if ((void *)local_98._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    pFVar6 = ::FName::NameToDisplayString
                       ((FString *)&local_48[0]._s_0,(FString *)&local_88._s_0,false);
    if (&local_a8 != pFVar6) {
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_a8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if ((void *)local_48[0]._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48[0]._0_8_);
    }
    if ((void *)local_88._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_88._s_0.X);
    }
  }
  pUVar3 = (UCanvas *)**(undefined8 **)this;
  local_88._s_0.X = (double)local_a8.Data.AllocatorInstance.Data;
  iVar9 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar9 = iVar11;
  }
  local_88._8_4_ = iVar9;
  pUVar7 = UEngine::GetSmallFont();
  fVar4 = __real_3f800000;
  local_48[0]._s_0.X = local_88._s_0.X;
  local_48[0]._8_4_ = local_88._8_4_;
  local_48[0]._12_4_ = local_88._12_4_;
  UCanvas::TextSize(pUVar3,pUVar7,(TStringView<wchar_t> *)&local_48[0]._s_0,local_res8,local_res10,
                    __real_3f800000,__real_3f800000);
  dVar13 = (**(double **)((longlong)this + 0x20) - (double)local_res8[0]) * __real_3fe0000000000000;
  dVar1 = **(double **)((longlong)this + 8);
  *(float *)(*(longlong *)((longlong)this + 0x30) + 0x21c) =
       (float)((*(double **)((longlong)this + 0x20))[1] + (*(double **)((longlong)this + 8))[1]);
  local_res20.ComparisonIndex.Value =
       (uint)((float)(dVar13 + dVar1) -
             ((*(FDisplayDebugManager **)((longlong)this + 0x30))->CurrentPos).field0_0x0._s_0.X);
  FDisplayDebugManager::DrawString
            (*(FDisplayDebugManager **)((longlong)this + 0x30),&local_a8,(float *)&local_res20);
  iVar9 = (param_3->Data).ArrayNum;
  iVar10 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar10 = iVar11;
  }
  if (iVar10 != 0) {
    pUVar3 = (UCanvas *)**(undefined8 **)this;
    local_88._s_0.X = (double)(param_3->Data).AllocatorInstance.Data;
    local_88._8_4_ = iVar10;
    pUVar7 = UEngine::GetSmallFont();
    local_48[0]._s_0.X = local_88._s_0.X;
    local_48[0]._8_4_ = local_88._8_4_;
    local_48[0]._12_4_ = local_88._12_4_;
    UCanvas::TextSize(pUVar3,pUVar7,(TStringView<wchar_t> *)&local_48[0]._s_0,local_res8,local_res10
                      ,fVar4,fVar4);
    local_res8[0] = local_res8[0] * __real_3f000000;
    dVar1 = **(double **)((longlong)this + 8);
    dVar13 = **(double **)((longlong)this + 0x10) * __real_3fe0000000000000;
    *(float *)(*(longlong *)((longlong)this + 0x30) + 0x21c) =
         (float)((*(double *)(*(longlong *)((longlong)this + 0x20) + 8) * __real_3fe0000000000000 +
                 (*(double **)((longlong)this + 8))[1]) - (double)(local_res10[0] * __real_3f000000)
                );
    local_res20.ComparisonIndex.Value =
         (uint)((float)((dVar1 - dVar13) - (double)local_res8[0]) -
               ((*(FDisplayDebugManager **)((longlong)this + 0x30))->CurrentPos).field0_0x0._s_0.X);
    FDisplayDebugManager::DrawString
              (*(FDisplayDebugManager **)((longlong)this + 0x30),param_3,(float *)&local_res20);
  }
  **(double **)((longlong)this + 8) =
       **(double **)((longlong)this + 0x20) + **(double **)((longlong)this + 0x10) +
       **(double **)((longlong)this + 8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14a6d1b90

void * __thiscall
`IEnhancedInputSubsystemInterface::ShowDebugActionModifiers'::__l8::<lambda_4>::operator()
          (void *this,UObject *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  undefined2 uVar17;
  bool bVar18;
  undefined1 uVar19;
  void *pvVar20;
  uint uVar21;
  UClass *pUVar22;
  double *pdVar23;
  uint uVar24;
  UObject *this_00;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  int local_res20;
  undefined4 local_238;
  undefined4 local_234;
  ForAnyElementType local_230;
  int local_228;
  int iStack_224;
  int local_220;
  double local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  double dStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1e7;
  undefined2 local_1e3;
  undefined1 local_1e1;
  UFunction *local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  char local_1c0;
  undefined4 local_1bf;
  undefined2 local_1bb;
  undefined1 local_1b9;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  char local_1a0;
  undefined4 local_19f;
  undefined2 local_19b;
  undefined1 local_199;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  char cStack_170;
  undefined4 uStack_16f;
  undefined2 uStack_16b;
  undefined1 uStack_169;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  undefined4 local_12f;
  undefined2 local_12b;
  undefined1 local_129;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  
  local_230.Data = (FScriptContainerElement *)0x0;
  uVar21 = param_2->ArrayNum;
  local_228 = 0;
  iStack_224 = 0;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (0 < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar21,&local_230,0,&iStack_224);
  }
  fVar11 = __real_437f0000;
  fVar10 = __real_3f800000;
  dVar9 = __real_3ff0000000000000;
  pdVar23 = *(double **)this;
  local_220 = 0;
  if (0.0 < pdVar23[1]) {
    uVar30 = (undefined4)__real_406fe00000000000;
    uVar31 = (undefined4)((ulonglong)__real_406fe00000000000 >> 0x20);
    local_218 = 0.0;
    do {
      local_res20 = 0;
      if (0.0 < *pdVar23) {
        dVar29 = 0.0;
        do {
          dVar6 = local_218 / ((*(double **)((longlong)this + 0x10))[1] - dVar9);
          dVar7 = dVar29 / (**(double **)((longlong)this + 0x10) - dVar9);
          dVar6 = (dVar6 + dVar6) - dVar9;
          dVar7 = (dVar7 + dVar7) - dVar9;
          uVar24 = (uint)(local_218 * *pdVar23 + dVar29);
          uVar21 = 0;
          if ((int)uVar24 < param_2->ArrayNum) {
            uVar21 = ~uVar24 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            pvVar20 = (void *)(*pcVar5)();
            return pvVar20;
          }
          pFVar4 = (param_2->AllocatorInstance).Data;
          uVar1 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar24 * 0x18 + 0x10);
          pFVar4 = pFVar4 + (longlong)(int)uVar24 * 0x18;
          dVar29 = *(double *)pFVar4;
          dVar8 = *(double *)(pFVar4 + 8);
          if (param_1 == (UObject *)0x0) {
LAB_14a6d1dc1:
            this_00 = (UObject *)0x0;
          }
          else {
            pUVar22 = UInputModifier::StaticClass();
            iVar3 = (int)pUVar22->_padding_;
            if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar3) ||
               (this_00 = param_1,
               (longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
               &pUVar22->_padding_)) goto LAB_14a6d1dc1;
          }
          uVar17 = local_12b;
          uVar16 = local_12f;
          uVar19 = local_1e1;
          uVar15 = local_1e3;
          uVar14 = local_1e7;
          if (this_00 == (UObject *)0x0) {
            dVar29 = SQRT(dVar29 * dVar29 + dVar8 * dVar8);
            if (dVar9 <= dVar29) {
              dVar29 = dVar9;
            }
            uVar19 = (undefined1)(int)(dVar29 * (double)CONCAT44(uVar31,uVar30));
            local_234 = CONCAT13(0xff,CONCAT12(uVar19,CONCAT11(uVar19,uVar19)));
            if (((local_230.Data <= (FScriptContainerElement *)&local_234) &&
                ((FScriptContainerElement *)&local_234 < local_230.Data + (longlong)iStack_224 * 4))
               && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar18)) {
              pcVar5 = (code *)swi(3);
              pvVar20 = (void *)(*pcVar5)();
              return pvVar20;
            }
            if (local_228 == iStack_224) {
              local_228 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_230,&iStack_224);
            }
            *(undefined4 *)(local_230.Data + (longlong)local_228 * 4) = local_234;
          }
          else {
            cVar2 = *(char *)(**(longlong **)((longlong)this + 8) + 0x48);
            if ((cVar2 == '\0') || (cVar2 == '\x01')) {
              uVar30 = 0;
              uVar31 = 0;
              dStack_1f8 = 0.0;
LAB_14a6d1e05:
              uVar32 = 0;
              uVar33 = 0;
              local_1f0 = 0;
            }
            else {
              uVar30 = SUB84(dVar8,0);
              uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
              dStack_1f8 = dVar8;
              if (cVar2 == '\x02') goto LAB_14a6d1e05;
              uVar32 = (undefined4)uVar1;
              uVar33 = (undefined4)((ulonglong)uVar1 >> 0x20);
              local_1f0 = uVar1;
            }
            if ((cVar2 == '\0') || (cVar2 == '\x01')) {
              dVar6 = 0.0;
            }
            local_200._0_4_ = SUB84(dVar29,0);
            uVar12 = (undefined4)local_200;
            local_200._4_4_ = (undefined4)((ulonglong)dVar29 >> 0x20);
            uVar13 = local_200._4_4_;
            uStack_16b = local_1e3;
            uStack_169 = local_1e1;
            uStack_14b = local_12b;
            uStack_149 = local_129;
            local_178 = CONCAT44(uVar33,uVar32);
            local_158 = 0;
            uStack_16f = local_1e7;
            uStack_150 = CONCAT31((int3)local_12f,cVar2);
            uStack_14c = (undefined1)((uint)local_12f >> 0x18);
            local_200 = dVar29;
            cStack_170 = cVar2;
            local_1e0 = UObject::FindFunctionChecked
                                  (this_00,NAME_UInputModifier_GetVisualizationColor);
            pUVar22 = UField::GetOwnerClass((UField *)local_1e0);
            if ((pUVar22->ClassFlags >> 7 & 1) == 0) {
              local_198 = 0;
              uStack_190 = 0;
              local_1b9 = local_129;
              local_1c8 = 0;
              local_1b8 = uVar12;
              uStack_1b4 = uVar13;
              local_1b0 = CONCAT44(uVar31,uVar30);
              local_1a8 = CONCAT44(uVar33,uVar32);
              local_1bf = uVar16;
              local_1bb = uVar17;
              local_19f = uVar14;
              local_19b = uVar15;
              local_199 = uVar19;
              local_1d8 = dVar7;
              local_1d0 = dVar6;
              local_1c0 = cVar2;
              local_1a0 = cVar2;
              (**(code **)(*(longlong *)this_00 + 0x260))(this_00,local_1e0,&local_1d8);
              local_210 = local_198;
              uStack_208 = uStack_190;
            }
            else {
              local_128 = uVar12;
              uStack_124 = uVar13;
              uStack_110 = CONCAT17(uStack_169,CONCAT25(uStack_16b,CONCAT41(uStack_16f,cStack_170)))
              ;
              local_118 = local_178;
              uStack_ec = CONCAT13(uStack_149,CONCAT21(uStack_14b,uStack_14c));
              local_f8 = (undefined4)local_158;
              uStack_f4 = local_158._4_4_;
              uStack_f0 = uStack_150;
              uStack_120 = uVar30;
              uStack_11c = uVar31;
              local_108 = dVar7;
              dStack_100 = dVar6;
              (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,&local_210,&local_108,&local_128);
            }
            fVar25 = (float)uStack_208;
            if ((float)uStack_208 <= 0.0) {
              fVar25 = 0.0;
            }
            fVar27 = local_210._4_4_;
            if (local_210._4_4_ <= 0.0) {
              fVar27 = 0.0;
            }
            if (fVar10 <= fVar25) {
              fVar25 = fVar10;
            }
            if (fVar10 <= fVar27) {
              fVar27 = fVar10;
            }
            fVar26 = (float)local_210;
            if ((float)local_210 <= 0.0) {
              fVar26 = 0.0;
            }
            if (fVar10 <= fVar26) {
              fVar26 = fVar10;
            }
            fVar28 = uStack_208._4_4_;
            if (uStack_208._4_4_ <= 0.0) {
              fVar28 = 0.0;
            }
            if (fVar10 <= fVar28) {
              fVar28 = fVar10;
            }
            local_238 = CONCAT13((char)(int)(fVar28 * fVar11 + __real_3f000000),
                                 CONCAT12((char)(int)(fVar26 * fVar11 + __real_3f000000),
                                          CONCAT11((char)(int)(fVar27 * fVar11 + __real_3f000000),
                                                   (char)(int)(fVar25 * fVar11 + __real_3f000000))))
            ;
            if (((local_230.Data <= (FScriptContainerElement *)&local_238) &&
                ((FScriptContainerElement *)&local_238 < local_230.Data + (longlong)iStack_224 * 4))
               && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar18)) {
              pcVar5 = (code *)swi(3);
              pvVar20 = (void *)(*pcVar5)();
              return pvVar20;
            }
            if (local_228 == iStack_224) {
              local_228 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_230,&iStack_224);
            }
            uVar30 = (undefined4)__real_406fe00000000000;
            uVar31 = (undefined4)((ulonglong)__real_406fe00000000000 >> 0x20);
            *(undefined4 *)(local_230.Data + (longlong)local_228 * 4) = local_238;
          }
          local_228 = local_228 + 1;
          pdVar23 = *(double **)this;
          local_res20 = local_res20 + 1;
          dVar29 = (double)local_res20;
        } while (dVar29 < *pdVar23);
      }
      local_220 = local_220 + 1;
      local_218 = (double)local_220;
    } while (local_218 < pdVar23[1]);
  }
  if (local_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data);
  }
  return (void *)0x0;
}

// AddMappingContext @ 14a6d4240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::AddMappingContext
          (IEnhancedInputSubsystemInterface *this,UInputMappingContext *param_1,int param_2,
          FModifyContextOptions *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FAppliedInputContextData *pFVar4;
  longlong *plVar5;
  TPairInitializer<TObjectPtr<UInputMappingContext_const_>_&&,FAppliedInputContextData_&&> *pTVar6;
  UInputMappingContext ***pppUVar7;
  TPairInitializer<TObjectPtr<UInputMappingContext_const_>_&&,FAppliedInputContextData_&&> local_68;
  undefined4 local_58;
  UInputMappingContext *local_50;
  UInputMappingContext *local_48;
  UInputMappingContext *local_40;
  UInputMappingContext **local_38;
  undefined1 *local_30;
  UInputMappingContext **local_28;
  undefined1 *local_20;
  
  if (param_1 == (UInputMappingContext *)0x0) {
    if ((byte)LogEnhancedInput._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    return;
  }
  lVar3 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar3 == 0) goto LAB_14a6d4391;
  if (param_1->RegistrationTrackingMode == Untracked) {
    local_68.Value._0_4_ = 0;
    local_68.Key._4_4_ = param_2;
    local_50 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_38 = &local_50;
    pppUVar7 = &local_38;
    local_30 = (undefined1 *)((longlong)&local_68.Key + 4);
    pTVar6 = (TPairInitializer<TObjectPtr<UInputMappingContext_const_>_&&,FAppliedInputContextData_&&>
              *)&stack0x00000010;
  }
  else {
    if (param_1->RegistrationTrackingMode != CountRegistrations) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystemInterface.cpp"
                         ,0x112,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_14a6d4391;
    }
    local_48 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar4 = TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
             ::Find((TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                     *)(lVar3 + 0x588),(TObjectPtr<UInputMappingContext_const_>)&local_48);
    if (pFVar4 != (FAppliedInputContextData *)0x0) {
      pFVar4->RegistrationCount = pFVar4->RegistrationCount + 1;
      goto LAB_14a6d4391;
    }
    local_58 = 1;
    local_68.Value._4_4_ = param_2;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_28 = &local_40;
    pppUVar7 = &local_28;
    local_20 = (undefined1 *)((longlong)&local_68.Value + 4);
    pTVar6 = &local_68;
  }
  TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TObjectPtr<UInputMappingContext_const_>_&&,FAppliedInputContextData_&&>_>
            ((TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
              *)(lVar3 + 0x588),pTVar6,(bool *)pppUVar7);
  (**(code **)(this->_padding_ + 0xd8))(this,param_3,1);
LAB_14a6d4391:
  if ((param_3->bNotifyUserSettings != '\0') &&
     (plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x18))(this), plVar5 != (longlong *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x00014a6d43cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x368))(plVar5,param_1,*(code **)(*plVar5 + 0x368));
    return;
  }
  return;
}

// AddTagToInputMode @ 14a6d4450

void __thiscall
IEnhancedInputSubsystemInterface::AddTagToInputMode
          (IEnhancedInputSubsystemInterface *this,FGameplayTag *param_1,
          FModifyContextOptions *param_2)

{
  code *pcVar1;
  FGameplayTagContainer local_28;
  
  pcVar1 = *(code **)(this->_padding_ + 0xb8);
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_28,param_1);
  (*pcVar1)(this,&local_28,param_2);
  if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
  }
  if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// AppendTagsToInputMode @ 14a6d4630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::AppendTagsToInputMode
          (IEnhancedInputSubsystemInterface *this,FGameplayTagContainer *param_1,
          FModifyContextOptions *param_2)

{
  UClass *this_00;
  longlong lVar1;
  FString local_18;
  
  if (2 < (byte)LogEnhancedInput._0_1_) {
    this_00 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    if ((*(byte *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 0x10) == 0) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  lVar1 = (**(code **)(this->_padding_ + 0x10))(this);
  if (lVar1 == 0) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      FGameplayTagContainer::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    FGameplayTagContainer::AppendTags((FGameplayTagContainer *)(lVar1 + 0x638),param_1);
    (**(code **)(this->_padding_ + 0xd8))(this,param_2,1);
  }
  return;
}

// ApplyAxisPropertyModifiers @ 14a6d4750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::ApplyAxisPropertyModifiers
          (IEnhancedInputSubsystemInterface *this,UEnhancedPlayerInput *param_1,
          FEnhancedActionKeyMapping *param_2)

{
  TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  longlong *plVar14;
  double dVar15;
  undefined1 auStackY_2e8 [32];
  ForAnyElementType local_298;
  undefined8 uStack_290;
  FInputAxisProperties local_288;
  UObject *local_278;
  UObject *local_270;
  UObject *local_268;
  UObject *local_260;
  FEnhancedActionKeyMapping *local_258;
  FKey local_250;
  undefined1 local_238 [128];
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if ((GGlobalAxisConfigMode != 2) &&
     ((GGlobalAxisConfigMode == 1 || (bVar9 = FKey::IsMouseButton(&param_2->Key), bVar9)))) {
    fVar8 = __real_3f800000;
    local_250.KeyName = (param_2->Key).KeyName;
    local_288.bInvert = '\0';
    local_250.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
    local_250.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    local_288.DeadZone = 0.2;
    local_288.Sensitivity = 1.0;
    local_288.Exponent = 1.0;
    if (local_250.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_250.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_250.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = UPlayerInput::GetAxisProperties((UPlayerInput *)param_1,&local_250,&local_288);
    if (bVar9) {
      local_298.Data = (FScriptContainerElement *)0x0;
      uStack_290 = 0;
      local_258 = param_2;
      if (0.0 < local_288.DeadZone) {
        pUVar12 = UInputModifierDeadZone::StaticClass();
        bVar9 = `IEnhancedInputSubsystemInterface::ApplyAxisPropertyModifiers'::__l11::<lambda_1>::
                operator()(&local_258,pUVar12);
        if (!bVar9) {
          pUVar13 = GetTransientPackageAsObject();
          FObjectInitializer::AssertIfInConstructor
                    (pUVar13,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar12 = UInputModifierDeadZone::StaticClass();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_238,pUVar12);
          local_238._8_8_ = pUVar13;
          local_278 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_238);
          if (local_238._64_8_ != 0) {
            plVar14 = (longlong *)(local_238 + 0x50);
            if ((longlong *)local_238._104_8_ != (longlong *)0x0) {
              plVar14 = (longlong *)local_238._104_8_;
            }
            (**(code **)(*plVar14 + 0x10))();
          }
          *(float *)(local_278 + 1) = local_288.DeadZone;
          local_278[1].field_0x8 = 0;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(local_278);
          }
          if (((local_298.Data <= (FScriptContainerElement *)&local_278) &&
              ((FScriptContainerElement *)&local_278 <
               local_298.Data + (longlong)uStack_290._4_4_ * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = (int)uStack_290;
          if ((int)uStack_290 == uStack_290._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_298,(int *)((longlong)&uStack_290 + 4));
          }
          uStack_290 = CONCAT44(uStack_290._4_4_,iVar10 + 1);
          *(UObject **)(local_298.Data + (longlong)iVar10 * 8) = local_278;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_278 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_278);
          }
        }
      }
      if (local_288.Exponent != fVar8) {
        pUVar12 = UInputModifierResponseCurveExponential::StaticClass();
        bVar9 = `IEnhancedInputSubsystemInterface::ApplyAxisPropertyModifiers'::__l11::<lambda_1>::
                operator()(&local_258,pUVar12);
        if (!bVar9) {
          pUVar13 = GetTransientPackageAsObject();
          FObjectInitializer::AssertIfInConstructor
                    (pUVar13,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar12 = UInputModifierResponseCurveExponential::StaticClass();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_1b8,pUVar12);
          local_1b8._8_8_ = pUVar13;
          local_270 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
          if (local_1b8._64_8_ != 0) {
            plVar14 = (longlong *)(local_1b8 + 0x50);
            if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
              plVar14 = (longlong *)local_1b8._104_8_;
            }
            (**(code **)(*plVar14 + 0x10))();
          }
          dVar15 = (double)local_288.Exponent;
          dVar3 = dVar15 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          auVar4._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar15,0);
          auVar4._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar15;
          auVar4._12_4_ =
               (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar15) >>
                    0x20);
          *(undefined1 (*) [16])(local_270 + 1) = auVar4;
          *(double *)&local_270[1].field_0x10 = dVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_270 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_270);
          }
          if (((local_298.Data <= (FScriptContainerElement *)&local_270) &&
              ((FScriptContainerElement *)&local_270 <
               local_298.Data + (longlong)uStack_290._4_4_ * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = (int)uStack_290;
          if ((int)uStack_290 == uStack_290._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_298,(int *)((longlong)&uStack_290 + 4));
          }
          uStack_290 = CONCAT44(uStack_290._4_4_,iVar10 + 1);
          *(UObject **)(local_298.Data + (longlong)iVar10 * 8) = local_270;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_270 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_270);
          }
        }
      }
      if (local_288.Sensitivity != fVar8) {
        pUVar13 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar13,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar12 = UInputModifierScalar::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_138,pUVar12);
        local_138._8_8_ = pUVar13;
        local_268 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
        if (local_138._64_8_ != 0) {
          plVar14 = (longlong *)(local_138 + 0x50);
          if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
            plVar14 = (longlong *)local_138._104_8_;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        dVar15 = (double)local_288.Sensitivity;
        dVar3 = dVar15 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        auVar5._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar15,0);
        auVar5._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar15;
        auVar5._12_4_ =
             (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar15) >>
                  0x20);
        *(undefined1 (*) [16])(local_268 + 1) = auVar5;
        *(double *)&local_268[1].field_0x10 = dVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_268 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_268);
        }
        if (((local_298.Data <= (FScriptContainerElement *)&local_268) &&
            ((FScriptContainerElement *)&local_268 < local_298.Data + (longlong)uStack_290._4_4_ * 8
            )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar10 = (int)uStack_290;
        if ((int)uStack_290 == uStack_290._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_298,(int *)((longlong)&uStack_290 + 4));
        }
        uStack_290 = CONCAT44(uStack_290._4_4_,iVar10 + 1);
        *(UObject **)(local_298.Data + (longlong)iVar10 * 8) = local_268;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_268 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_268);
        }
      }
      if (local_288.bInvert != 0) {
        pUVar12 = UInputModifierNegate::StaticClass();
        bVar9 = `IEnhancedInputSubsystemInterface::ApplyAxisPropertyModifiers'::__l11::<lambda_1>::
                operator()(&local_258,pUVar12);
        if (!bVar9) {
          pUVar13 = GetTransientPackageAsObject();
          FObjectInitializer::AssertIfInConstructor
                    (pUVar13,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar12 = UInputModifierNegate::StaticClass();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_b8,pUVar12);
          local_b8._8_8_ = pUVar13;
          local_260 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
          if (local_b8._64_8_ != 0) {
            plVar14 = (longlong *)(local_b8 + 0x50);
            if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
              plVar14 = (longlong *)local_b8._104_8_;
            }
            (**(code **)(*plVar14 + 0x10))();
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_260 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_260);
          }
          if (((local_298.Data <= (FScriptContainerElement *)&local_260) &&
              ((FScriptContainerElement *)&local_260 <
               local_298.Data + (longlong)uStack_290._4_4_ * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = (int)uStack_290;
          if ((int)uStack_290 == uStack_290._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_298,(int *)((longlong)&uStack_290 + 4));
          }
          uStack_290 = CONCAT44(uStack_290._4_4_,iVar10 + 1);
          *(UObject **)(local_298.Data + (longlong)iVar10 * 8) = local_260;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_260 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_260);
          }
        }
      }
      pFVar6 = (param_2->Modifiers).AllocatorInstance.Data;
      uVar7._0_4_ = (param_2->Modifiers).ArrayNum;
      uVar7._4_4_ = (param_2->Modifiers).ArrayMax;
      pTVar1 = &param_2->Modifiers;
      (pTVar1->AllocatorInstance).Data = local_298.Data;
      (param_2->Modifiers).ArrayNum = (int)uStack_290;
      (param_2->Modifiers).ArrayMax = uStack_290._4_4_;
      local_298.Data = pFVar6;
      uStack_290 = uVar7;
      if ((pTVar1 == (TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *)&local_298)
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar10 = (int)uStack_290;
      if ((int)uStack_290 != 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,(int)uStack_290,&pTVar1->AllocatorInstance,
                            &(param_2->Modifiers).ArrayNum,&(param_2->Modifiers).ArrayMax);
        ConstructItems<TObjectPtr<UInputModifier>,TObjectPtr<UInputModifier>,int>
                  ((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8,
                   (TObjectPtr<UInputModifier> *)local_298.Data,iVar10);
      }
      if (local_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data);
      }
    }
  }
  return;
}

// ApplyForcedInput @ 14a6d4eb0

void __thiscall
IEnhancedInputSubsystemInterface::ApplyForcedInput
          (IEnhancedInputSubsystemInterface *this,UInputAction *param_1,FInputActionValue *param_2)

{
  code *pcVar1;
  bool bVar2;
  TPairInitializer<UInputAction_const_*_&,FInputActionValue_&> local_res8;
  FInputActionValue **local_18;
  FInputActionValue *local_10;
  
  local_res8.Value = (FInputActionValue *)param_1;
  if (param_1 == (UInputAction *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Action",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystemInterface.cpp"
                       ,0x4dd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = &local_res8.Value;
  local_10 = param_2;
  TSet<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInputAction_const_*_&,FInputActionValue_&>_>
            ((TSet<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>,FDefaultSetAllocator>
              *)&this->ForcedActions,&local_res8,(bool *)&local_18);
  return;
}

// ApplyForcedInput @ 14a6d4f30

void __thiscall
IEnhancedInputSubsystemInterface::ApplyForcedInput
          (IEnhancedInputSubsystemInterface *this,FKey *param_1,FInputActionValue *param_2)

{
  FName FVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  EInputActionValueType EVar5;
  undefined7 uVar6;
  bool bVar7;
  uint uVar8;
  FInjectedKeyData *pFVar9;
  
  bVar7 = FKey::IsValid(param_1);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Key.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystemInterface.cpp"
                       ,0x4e3,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = param_1->KeyName;
  uVar8 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar9 = TMapBase<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>_>
           ::FindOrAddImpl<FKey_const_&>
                     ((TMapBase<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>_>
                       *)&this->ForcedKeys,uVar8 + FVar1.Number,param_1);
  dVar3 = (param_2->Value).field0_0x0._s_0.Y;
  dVar4 = (param_2->Value).field0_0x0._s_0.Z;
  EVar5 = param_2->ValueType;
  uVar6 = *(undefined7 *)&param_2->field_0x19;
  (pFVar9->InputValue).Value.field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  (pFVar9->InputValue).Value.field0_0x0._s_0.Y = dVar3;
  (pFVar9->InputValue).Value.field0_0x0._s_0.Z = dVar4;
  (pFVar9->InputValue).ValueType = EVar5;
  *(undefined7 *)&(pFVar9->InputValue).field_0x19 = uVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// BindUserSettingDelegates @ 14a6d5e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::BindUserSettingDelegates(IEnhancedInputSubsystemInterface *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  UClass *this_00;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  FName local_res8;
  FName local_res10;
  
  lVar3 = (**(code **)(this->_padding_ + 0x18))();
  if (lVar3 == 0) {
    if ((byte)LogEnhancedInput._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    return;
  }
  this_00 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if ((*(byte *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 2) == 0) {
    if ((byte)LogEnhancedInput._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    return;
  }
  pcVar4 = strstr("&IEnhancedInputSubsystemInterface::OnUserSettingsChanged","::");
  pcVar6 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14a6d5f7a:
    pcVar5 = &DAT_00000002;
LAB_14a6d5f7d:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_14a6d5f7a;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 == '0') goto LAB_14a6d5f7d;
  }
  ::FName::FName(&local_res8,pcVar5);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UEnhancedInputUserSettings_*>::
  __Internal_AddUniqueDynamic<IEnhancedInputSubsystemInterface>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UEnhancedInputUserSettings_*>
              *)(lVar3 + 0x30),this,(pmf_73179564)0x14a6d2270,local_res8);
  pcVar4 = strstr("&IEnhancedInputSubsystemInterface::OnUserKeyProfileChanged","::");
  if (pcVar4 != (char *)0x0) {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar5 != (char *)0x0) && (pcVar6 = pcVar5 + 2, pcVar5[2] != '0')) goto LAB_14a6d6058;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14a6d6058:
  ::FName::FName(&local_res10,pcVar6);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UEnhancedPlayerMappableKeyProfile_const_*>
  ::__Internal_AddUniqueDynamic<IEnhancedInputSubsystemInterface>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UEnhancedPlayerMappableKeyProfile_const_*>
              *)(lVar3 + 0x60),this,(pmf_12bcab4c)0x14a6d227c,local_res10);
  return;
}

// ClearAllMappings @ 14a6d6490

void __thiscall
IEnhancedInputSubsystemInterface::ClearAllMappings(IEnhancedInputSubsystemInterface *this)

{
  TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar1;
  longlong lVar2;
  byte local_res8 [8];
  
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar2 != 0) {
    this_00 = (TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
               *)(lVar2 + 0x588);
    bVar1 = 1 < *(int *)(lVar2 + 0x5d0);
    if (!bVar1) {
      TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    *(undefined4 *)(lVar2 + 0x590) = 0;
    if (*(int *)(lVar2 + 0x594) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)(lVar2 + 0x594));
    }
    *(undefined4 *)(lVar2 + 0x5bc) = 0;
    *(undefined4 *)(lVar2 + 0x5b8) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x5b0) = 0;
    if ((*(int *)(lVar2 + 0x5b4) < 0) || (0x80 < *(int *)(lVar2 + 0x5b4))) {
      *(undefined4 *)(lVar2 + 0x5b4) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(lVar2 + 0x598),0);
    }
    if (bVar1) {
      *(undefined4 *)(lVar2 + 0x5d0) = 1;
      TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
    local_res8[0] = local_res8[0] & 0xf9 | 1;
    (**(code **)(this->_padding_ + 0xd8))(this,local_res8,1);
  }
  return;
}

// ControlMappingsRebuiltThisFrame @ 14a6d6ba0

void __thiscall
IEnhancedInputSubsystemInterface::ControlMappingsRebuiltThisFrame
          (IEnhancedInputSubsystemInterface *this)

{
  return;
}

// GetAllPlayerMappableActionKeyMappings @ 14a6de670

TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> * __thiscall
IEnhancedInputSubsystemInterface::GetAllPlayerMappableActionKeyMappings
          (IEnhancedInputSubsystemInterface *this,
          TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  UPlayerMappableKeySettings *pUVar3;
  FEnhancedActionKeyMapping *this_00;
  FEnhancedActionKeyMapping *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar2 != 0) {
    this_00 = *(FEnhancedActionKeyMapping **)(lVar2 + 0x628);
    iVar1 = *(int *)(lVar2 + 0x630);
    pFVar4 = this_00 + iVar1;
    while( true ) {
      if (*(int *)(lVar2 + 0x630) != iVar1) {
        `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar4) break;
      pUVar3 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this_00);
      if (pUVar3 != (UPlayerMappableKeySettings *)0x0) {
        TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FEnhancedActionKeyMapping_const_&>(__return_storage_ptr__,this_00);
      }
      this_00 = this_00 + 1;
    }
  }
  return __return_storage_ptr__;
}

// GetAllRelevantInputModifiersForDebug @ 14a6de720

void __cdecl
IEnhancedInputSubsystemInterface::GetAllRelevantInputModifiersForDebug
          (UEnhancedPlayerInput *param_1,FInputActionInstance *param_2,
          TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  UInputAction *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FInputActionInstance *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  UInputModifier *local_58 [3];
  
  param_3->ArrayNum = 0;
  local_res10 = param_2;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  if ((param_3 == (TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *)&param_2->Modifiers) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (param_2->Modifiers).ArrayNum;
  if (iVar2 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
    ConstructItems<UInputModifier_*,TObjectPtr<UInputModifier>,int>
              ((param_3->AllocatorInstance).Data + (longlong)iVar6 * 8,
               (TObjectPtr<UInputModifier> *)(param_2->Modifiers).AllocatorInstance.Data,iVar2);
  }
  local_res20 = (param_1->EnhancedActionMappings).ArrayNum;
  uVar7 = (ulonglong)(int)local_res20;
  pFVar11 = (param_1->EnhancedActionMappings).AllocatorInstance.Data;
  pFVar9 = pFVar11 + 0x18;
  pFVar10 = pFVar11 + uVar7 * 0x50;
  while( true ) {
    if ((param_1->EnhancedActionMappings).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar10) break;
    pUVar3 = (param_2->SourceAction).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if (*(UInputAction **)(pFVar9 + 8) == pUVar3) {
      puVar8 = *(undefined8 **)(pFVar9 + -8);
      iVar2 = *(int *)pFVar9;
      puVar1 = puVar8 + iVar2;
      while( true ) {
        if (*(int *)pFVar9 != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UInputModifier>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        param_2 = local_res10;
        if (puVar8 == puVar1) break;
        local_58[0] = (UInputModifier *)*puVar8;
        TArray<UInputModifier_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UInputModifier_*>
                  (param_3,local_58);
        puVar8 = puVar8 + 1;
      }
    }
    uVar7 = (ulonglong)local_res20;
    pFVar11 = pFVar11 + 0x50;
    pFVar9 = pFVar9 + 0x50;
  }
  return;
}

// GetInputMode @ 14a6df370

/* WARNING: Enum "Type": Some values do not have unique names */

FGameplayTagContainer * __thiscall
IEnhancedInputSubsystemInterface::GetInputMode
          (IEnhancedInputSubsystemInterface *this,FGameplayTagContainer *__return_storage_ptr__)

{
  UClass *this_00;
  longlong lVar1;
  
  if (2 < (byte)LogEnhancedInput._0_1_) {
    this_00 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    if ((*(byte *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 0x10) == 0) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  lVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar1 != 0) {
    (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
    (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
    (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ParentTags).ArrayNum = 0;
    (__return_storage_ptr__->ParentTags).ArrayMax = 0;
    FGameplayTagContainer::operator=
              (__return_storage_ptr__,(FGameplayTagContainer *)(lVar1 + 0x638));
    return __return_storage_ptr__;
  }
  if (1 < (byte)LogEnhancedInput._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
  }
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetUserSettings @ 14a6e2c00

UEnhancedInputUserSettings * __thiscall
IEnhancedInputSubsystemInterface::GetUserSettings(IEnhancedInputSubsystemInterface *this)

{
  return (UEnhancedInputUserSettings *)0x0;
}

// HandleControlMappingRebuildDelegate @ 14a6e3260

void __thiscall
IEnhancedInputSubsystemInterface::HandleControlMappingRebuildDelegate
          (IEnhancedInputSubsystemInterface *this)

{
  if (this->bControlMappingsRebuiltThisTick != false) {
    (**(code **)(this->_padding_ + 0x110))();
    this->bControlMappingsRebuiltThisTick = false;
  }
  return;
}

// HasContinuousInputInjectionForAction @ 14a6e3b00

bool __thiscall
IEnhancedInputSubsystemInterface::HasContinuousInputInjectionForAction
          (IEnhancedInputSubsystemInterface *this,UInputAction *param_1)

{
  int iVar1;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar2;
  TObjectPtr<UInputAction_const_>_u_0 local_res8;
  
  this_00 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
             *)(**(code **)(this->_padding_ + 0x118))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UInputAction *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar1 = TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                    (this_00,uVar2 >> 0x10 ^ uVar2,
                     (TObjectPtr<UInputAction_const_> *)&local_res8.ObjectPtr);
  return iVar1 != -1;
}

// HasMappingContext @ 14a6e3bb0

bool __thiscall
IEnhancedInputSubsystemInterface::HasMappingContext
          (IEnhancedInputSubsystemInterface *this,UInputMappingContext *param_1)

{
  undefined1 uVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0xffffffff;
  uVar1 = (**(code **)(this->_padding_ + 0xf0))(this,param_1,local_res8);
  return (bool)uVar1;
}

// HasMappingContext @ 14a6e3be0

bool __thiscall
IEnhancedInputSubsystemInterface::HasMappingContext
          (IEnhancedInputSubsystemInterface *this,UInputMappingContext *param_1,int *param_2)

{
  longlong lVar1;
  FAppliedInputContextData *pFVar2;
  UInputMappingContext *local_res8;
  
  *param_2 = -1;
  lVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar1 != 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInputMappingContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInputMappingContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
             ::Find((TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                     *)(lVar1 + 0x588),(TObjectPtr<UInputMappingContext_const_>)&local_res8);
    if (pFVar2 != (FAppliedInputContextData *)0x0) {
      *param_2 = pFVar2->Priority;
      return true;
    }
  }
  return false;
}

// HasTriggerWith @ 14a6e4080

bool __thiscall
IEnhancedInputSubsystemInterface::HasTriggerWith
          (IEnhancedInputSubsystemInterface *this,
          TFunctionRef<bool___cdecl(UInputTrigger_const_*)> *param_1,
          TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_res18 [2];
  
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar4 == pFVar1) break;
    local_res18[0] = *(undefined8 *)pFVar4;
    cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res18);
    if (cVar3 != '\0') {
      return true;
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// InitalizeUserSettings @ 14a6e4100

void __thiscall
IEnhancedInputSubsystemInterface::InitalizeUserSettings(IEnhancedInputSubsystemInterface *this)

{
  return;
}

// InjectChordBlockers @ 14a6e4a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::InjectChordBlockers
          (IEnhancedInputSubsystemInterface *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  ETriggerType EVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined8 *puVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType *pFVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_1d8 [32];
  UObject **local_1b8;
  FScriptContainerElement *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185 [5];
  UObject *local_180;
  UObject *local_178;
  longlong local_170;
  uint local_168;
  longlong local_160;
  FScriptContainerElement *local_158;
  UInputTrigger *local_150;
  TArray<int,TSizedDefaultAllocator<32>_> *local_148;
  FScriptContainerElement *local_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_148 = param_1;
  pUVar8 = (UObject *)(**(code **)(this->_padding_ + 0x10))();
  if (pUVar8 != (UObject *)0x0) {
    local_168 = param_1->ArrayNum;
    uVar9 = (ulonglong)(int)local_168;
    pFVar15 = (param_1->AllocatorInstance).Data;
    pFVar17 = pFVar15 + uVar9 * 4;
    local_140 = pFVar17;
    while( true ) {
      local_158 = pFVar15;
      if (param_1->ArrayNum != (int)uVar9) {
        local_188 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_188);
      }
      if (pFVar15 == pFVar17) break;
      uVar6 = *(uint *)pFVar15;
      uVar19 = 0;
      if ((int)uVar6 < *(int *)&pUVar8[0x27].field_0x18) {
        uVar19 = ~uVar6 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_1b8 = (UObject **)(longlong)(int)uVar6,
         local_1b0 = (FScriptContainerElement *)(longlong)*(int *)&pUVar8[0x27].field_0x18,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar19 = uVar6 + 1;
      local_170 = (longlong)(int)uVar6 * 0x50 + *(longlong *)&pUVar8[0x27].field_0x10;
      if ((int)uVar19 < *(int *)&pUVar8[0x27].field_0x18) {
        lVar20 = (longlong)(int)uVar19 * 0x50;
        do {
          uVar6 = 0;
          if ((int)uVar19 < *(int *)&pUVar8[0x27].field_0x18) {
            uVar6 = ~uVar19 >> 0x1f;
          }
          local_160 = lVar20;
          if (uVar6 == 0) {
            local_1b8 = (UObject **)(longlong)(int)uVar19;
            local_1b0 = (FScriptContainerElement *)(longlong)*(int *)&pUVar8[0x27].field_0x18;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar18 = (ForAnyElementType *)(*(longlong *)&pUVar8[0x27].field_0x10 + lVar20);
          if ((pFVar18[4].Data != (FScriptContainerElement *)0x0) &&
             (pFVar18[5].Data == *(FScriptContainerElement **)(local_170 + 0x28))) {
            pFVar15 = pFVar18->Data;
            iVar7 = *(int *)&pFVar18[1].Data;
            pFVar17 = pFVar15 + (longlong)iVar7 * 8;
            while( true ) {
              if (*(int *)&pFVar18[1].Data != iVar7) {
                local_187 = 0;
                `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(&local_187);
              }
              if (pFVar15 == pFVar17) {
                pFVar17 = pFVar18[4].Data;
                puVar16 = *(undefined8 **)(pFVar17 + 0x50);
                iVar7 = *(int *)(pFVar17 + 0x58);
                puVar2 = puVar16 + iVar7;
                goto LAB_14a6e4c20;
              }
              EVar5 = UInputTrigger::GetTriggerType(*(UInputTrigger **)pFVar15);
              if (EVar5 == Explicit) break;
              pFVar15 = pFVar15 + 8;
            }
LAB_14a6e4de3:
            FObjectInitializer::AssertIfInConstructor
                      (pUVar8,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar10 = UInputTriggerChordBlocker::StaticClass();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_b8,pUVar10);
            local_b8._8_8_ = pUVar8;
            pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
            if (local_b8._64_8_ != 0) {
              plVar12 = (longlong *)(local_b8 + 0x50);
              if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
                plVar12 = (longlong *)local_b8._104_8_;
              }
              (**(code **)(*plVar12 + 0x10))();
            }
            lVar14 = local_170;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (*(UObject **)(local_170 + 0x20) != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(*(UObject **)(local_170 + 0x20));
            }
            *(undefined8 *)(pUVar11 + 2) = *(undefined8 *)(lVar14 + 0x20);
            local_178 = pUVar11;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar11);
            }
            pFVar17 = pFVar18->Data;
            if ((pFVar17 <= (FScriptContainerElement *)&local_178) &&
               (lVar14 = (longlong)*(int *)((longlong)&pFVar18[1].Data + 4),
               (FScriptContainerElement *)&local_178 < pFVar17 + lVar14 * 8)) {
              local_1a0 = (longlong)*(int *)&pFVar18[1].Data;
              local_198 = 8;
              local_1b8 = &local_178;
              local_1b0 = pFVar17;
              local_1a8 = lVar14;
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
            iVar7 = *(int *)&pFVar18[1].Data;
            piVar1 = (int *)((longlong)&pFVar18[1].Data + 4);
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,pFVar18,piVar1);
            }
            *(int *)&pFVar18[1].Data = iVar7 + 1;
            *(UObject **)(pFVar18->Data + (longlong)iVar7 * 8) = local_178;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_178 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_178);
            }
          }
          lVar20 = lVar20 + 0x50;
          uVar19 = uVar19 + 1;
          pFVar17 = local_140;
          param_1 = local_148;
          local_160 = lVar20;
        } while ((int)uVar19 < *(int *)&pUVar8[0x27].field_0x18);
      }
      uVar9 = (ulonglong)local_168;
      pFVar15 = local_158 + 4;
    }
  }
  return;
LAB_14a6e4c20:
  if (*(int *)(pFVar17 + 0x58) != iVar7) {
    local_186 = 0;
    `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_186);
  }
  if (puVar16 == puVar2) {
    pUVar11 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar11,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = UInputTriggerDown::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_138,pUVar10);
    local_138._8_8_ = pUVar11;
    pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
    if (local_138._64_8_ != 0) {
      plVar12 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    local_180 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar17 = pFVar18->Data;
    if ((pFVar17 <= (FScriptContainerElement *)&local_180) &&
       (lVar20 = (longlong)*(int *)((longlong)&pFVar18[1].Data + 4),
       (FScriptContainerElement *)&local_180 < pFVar17 + lVar20 * 8)) {
      local_1a0 = (longlong)*(int *)&pFVar18[1].Data;
      local_198 = 8;
      local_1b8 = &local_180;
      local_1b0 = pFVar17;
      local_1a8 = lVar20;
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
    iVar7 = *(int *)&pFVar18[1].Data;
    piVar1 = (int *)((longlong)&pFVar18[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar18,piVar1);
    }
    *(int *)&pFVar18[1].Data = iVar7 + 1;
    *(UObject **)(pFVar18->Data + (longlong)iVar7 * 8) = local_180;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_180 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_180);
    }
    iVar7 = *(int *)&pFVar18[1].Data;
    uVar13 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar13 < iVar7) {
      uVar6 = ~uVar13 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_1b8 = (UObject **)(longlong)(int)uVar13;
      local_1b0 = (FScriptContainerElement *)(longlong)iVar7;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)
     (*(longlong *)(pFVar18->Data + (longlong)*(int *)&pFVar18[1].Data * 8 + -8) + 0x28) =
         0x322bcc77;
    lVar20 = local_160;
    goto LAB_14a6e4de3;
  }
  local_150 = (UInputTrigger *)*puVar16;
  bVar4 = UE::Core::Private::Function::
          TFunctionRefCaller<`IEnhancedInputSubsystemInterface::InjectChordBlockers'::__l14::<lambda_1>,bool,UInputTrigger_const_*>
          ::Call(local_185,&local_150);
  lVar20 = local_160;
  if (bVar4) goto LAB_14a6e4de3;
  puVar16 = puVar16 + 1;
  goto LAB_14a6e4c20;
}

// InjectInputForAction @ 14a6e4fb0

void __thiscall
IEnhancedInputSubsystemInterface::InjectInputForAction
          (IEnhancedInputSubsystemInterface *this,UInputAction *param_1,FInputActionValue *param_2,
          TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UEnhancedPlayerInput *this_00;
  UInputAction *local_res8;
  TVector<double>_u_0 local_28;
  undefined8 uStack_10;
  
  this_00 = (UEnhancedPlayerInput *)(**(code **)(this->_padding_ + 0x10))();
  if (this_00 != (UEnhancedPlayerInput *)0x0) {
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_28._s_0.X = (param_2->Value).field0_0x0._s_0.X;
    local_28._s_0.Y = (param_2->Value).field0_0x0._s_0.Y;
    local_28._s_0.Z = (param_2->Value).field0_0x0._s_0.Z;
    uStack_10 = *(undefined8 *)&param_2->ValueType;
    UEnhancedPlayerInput::InjectInputForAction
              (this_00,(TObjectPtr<UInputAction_const_>)&local_res8,
               (FInputActionValue *)&local_28._s_0,param_3,param_4);
  }
  return;
}

// InjectInputForPlayerMapping @ 14a6e5240

void __thiscall
IEnhancedInputSubsystemInterface::InjectInputForPlayerMapping
          (IEnhancedInputSubsystemInterface *this,FName param_1,FInputActionValue *param_2,
          TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  local_28 = *(undefined4 *)&(param_2->Value).field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0xc);
  local_18 = (param_2->Value).field0_0x0._s_0.Z;
  (**(code **)(this->_padding_ + 0x58))(local_28,local_18,&local_28,param_3,param_4);
  return;
}

// InjectInputVectorForAction @ 14a6e5280

void __thiscall
IEnhancedInputSubsystemInterface::InjectInputVectorForAction
          (IEnhancedInputSubsystemInterface *this,UInputAction *param_1,TVector<double> *param_2,
          TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *param_4)

{
  EInputActionValueType EVar1;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_1 == (UInputAction *)0x0) {
    EVar1 = Boolean;
  }
  else {
    EVar1 = param_1->ValueType;
  }
  local_38 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  uStack_30 = CONCAT31(uStack_30._1_3_,EVar1);
  local_28 = *(undefined4 *)&param_2->field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  if ((EVar1 == Boolean) || (EVar1 == Axis1D)) {
    uStack_20 = 0;
    uStack_1c = 0;
  }
  else if (EVar1 != Axis2D) goto LAB_14a6e52d2;
  local_38 = 0;
LAB_14a6e52d2:
  local_18 = (undefined4)local_38;
  uStack_14 = local_38._4_4_;
  uStack_10 = uStack_30;
  (**(code **)(this->_padding_ + 0x40))(this,local_28,&local_28,param_3,param_4);
  return;
}

// InjectInputVectorForPlayerMapping @ 14a6e5310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::InjectInputVectorForPlayerMapping
          (IEnhancedInputSubsystemInterface *this,FName param_1,TVector<double> *param_2,
          TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *param_4)

{
  EInputActionValueType EVar1;
  UEnhancedInputUserSettings *this_00;
  UInputAction *pUVar2;
  FName local_res10;
  FString local_48;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res10 = param_1;
  this_00 = (UEnhancedInputUserSettings *)(**(code **)(this->_padding_ + 0x18))();
  if (this_00 == (UEnhancedInputUserSettings *)0x0) {
    if (2 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
    return;
  }
  pUVar2 = UEnhancedInputUserSettings::FindInputActionForMapping(this_00,local_res10);
  if (pUVar2 == (UInputAction *)0x0) {
    if ((byte)LogEnhancedInput._0_1_ < 3) {
      return;
    }
    ::FName::ToString(&local_res10,&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    if ((void *)CONCAT44(local_48.Data.AllocatorInstance.Data._4_4_,
                         local_48.Data.AllocatorInstance.Data._0_4_) == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)CONCAT44(local_48.Data.AllocatorInstance.Data._4_4_,
                                   local_48.Data.AllocatorInstance.Data._0_4_));
    return;
  }
  local_38 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  EVar1 = pUVar2->ValueType;
  uStack_30 = CONCAT31(uStack_30._1_3_,EVar1);
  local_48.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_2->field0_0x0;
  local_48.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  local_48.Data.ArrayNum = *(int *)((longlong)&param_2->field0_0x0 + 8);
  local_48.Data.ArrayMax = *(int *)((longlong)&param_2->field0_0x0 + 0xc);
  if ((EVar1 == Boolean) || (EVar1 == Axis1D)) {
    iStack_20 = 0;
    iStack_1c = 0;
  }
  else {
    iStack_20 = local_48.Data.ArrayNum;
    iStack_1c = local_48.Data.ArrayMax;
    if (EVar1 != Axis2D) goto LAB_14a6e5395;
  }
  local_38 = 0;
LAB_14a6e5395:
  local_18 = (undefined4)local_38;
  uStack_14 = local_38._4_4_;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  local_28 = local_48.Data.AllocatorInstance.Data._0_4_;
  uStack_24 = local_48.Data.AllocatorInstance.Data._4_4_;
  (**(code **)(this->_padding_ + 0x40))(this,pUVar2,&local_28,param_3,param_4);
  return;
}

// OnUserKeyProfileChanged @ 14a6e9770

void __thiscall
IEnhancedInputSubsystemInterface::OnUserKeyProfileChanged
          (IEnhancedInputSubsystemInterface *this,UEnhancedPlayerMappableKeyProfile *param_1)

{
  byte local_res8 [32];
  
  local_res8[0] = local_res8[0] & 0xf9 | 1;
  (**(code **)(this->_padding_ + 0xd8))(this,local_res8,1);
  return;
}

// OnUserSettingsChanged @ 14a6e97a0

void __thiscall
IEnhancedInputSubsystemInterface::OnUserSettingsChanged
          (IEnhancedInputSubsystemInterface *this,UEnhancedInputUserSettings *param_1)

{
  byte local_res8 [32];
  
  local_res8[0] = local_res8[0] & 0xf9 | 1;
  (**(code **)(this->_padding_ + 0xd8))(this,local_res8,1);
  return;
}

// PurgeDebugVisualizations @ 14a6eb740

void __cdecl IEnhancedInputSubsystemInterface::PurgeDebugVisualizations(void)

{
  bool bVar1;
  
  bVar1 = 1 < (int)CachedModifierVisualizations._72_4_;
  if (!bVar1) {
    TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
                      *)&CachedModifierVisualizations);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVisualizationTexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVisualizationTexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&CachedModifierVisualizations,0,CachedModifierVisualizations._8_4_);
  CachedModifierVisualizations._8_4_ = 0;
  if (CachedModifierVisualizations._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&CachedModifierVisualizations,0,
               (int *)&CachedModifierVisualizations.field_0xc);
  }
  CachedModifierVisualizations._48_4_ = 0xffffffff;
  CachedModifierVisualizations._52_4_ = 0;
  CachedModifierVisualizations._40_4_ = 0;
  if (0x80 < (uint)CachedModifierVisualizations._44_4_) {
    CachedModifierVisualizations._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&CachedModifierVisualizations.field_0x10,0);
  }
  if (bVar1) {
    CachedModifierVisualizations._72_4_ = 1;
    TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
              *)&CachedModifierVisualizations);
  }
  return;
}

// QueryKeysMappedToAction @ 14a6eb820

TArray<FKey,TSizedDefaultAllocator<32>_> * __thiscall
IEnhancedInputSubsystemInterface::QueryKeysMappedToAction
          (IEnhancedInputSubsystemInterface *this,
          TArray<FKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UInputAction *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == (UInputAction *)0x0) {
    return __return_storage_ptr__;
  }
  lVar2 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x628);
    iVar1 = *(int *)(lVar2 + 0x630);
    lVar4 = (longlong)iVar1 * 0x50 + lVar3;
    while( true ) {
      if (*(int *)(lVar2 + 0x630) != iVar1) {
        `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (lVar3 == lVar4) break;
      if ((*(UInputAction **)(lVar3 + 0x20) != (UInputAction *)0x0) &&
         (*(UInputAction **)(lVar3 + 0x20) == param_1)) {
        TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                  (__return_storage_ptr__,(FKey *)(lVar3 + 0x28));
      }
      lVar3 = lVar3 + 0x50;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// QueryMapKeyInActiveContextSet @ 14a6eb900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EMappingQueryResult __thiscall
IEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet
          (IEnhancedInputSubsystemInterface *this,UInputMappingContext *param_1,
          UInputAction *param_2,FKey *param_3,
          TArray<FMappingQueryIssue,TSizedDefaultAllocator<32>_> *param_4,EMappingQueryIssue param_5
          )

{
  UObject *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar4;
  int iVar5;
  longlong *plVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar7;
  bool bVar8;
  EMappingQueryResult EVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  uint *puVar17;
  ForElementType<FSetElementId> FVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 auStackY_258 [32];
  undefined1 local_208;
  FIdentityFunctor local_207 [7];
  ForAnyElementType local_200;
  int local_1f8;
  int iStack_1f4;
  undefined8 local_1f0;
  uint local_1e8;
  uint local_1e4;
  undefined8 local_1e0;
  uint local_1d8;
  uint uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d0;
  undefined4 local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  FIdentityFunctor *local_1a0;
  FKey *local_198;
  FIdentityFunctor **local_190;
  IEnhancedInputSubsystemInterface *local_188;
  TArray<FMappingQueryIssue,TSizedDefaultAllocator<32>_> *local_180;
  UInputAction *local_178;
  UInputMappingContext *local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  longlong *local_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FName local_e0;
  FKeyDetails *local_d8;
  TReferenceControllerBase<1> *local_d0;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  int local_78;
  uint local_74;
  ForElementType<FSetElementId> local_70;
  uint local_60 [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_180 = param_4;
  local_198 = param_3;
  local_188 = this;
  local_178 = param_2;
  local_170 = param_1;
  lVar14 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar14 == 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
    return Error_EnhancedInputNotEnabled;
  }
  local_a8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_70.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_60[0] = 0;
  if ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)local_a8 !=
      (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)(lVar14 + 0x588)) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_70,(int *)local_60,(ForElementType<FSetElementId> *)(lVar14 + 0x5c0),
               *(int *)(lVar14 + 0x5d0));
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_a8,
                (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(lVar14 + 0x588));
  }
  local_1a0 = local_207;
  uVar25 = local_a8._8_4_ - local_74;
  local_1e8 = local_74;
  local_190 = &local_1a0;
  local_1e4 = local_a8._8_4_;
  local_1e0 = 1;
  if (0 < (int)uVar25) {
    uVar3 = 1;
    uVar21 = local_a8._8_4_;
    uVar13 = local_74;
    uVar22 = local_a8._8_4_;
    pTVar7 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_a8._0_8_;
    pTVar4 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_a8._0_8_;
    uVar23 = local_80;
    iVar12 = local_78;
    if (local_74 != 0) {
      while (iVar5 = iVar12, local_1b8 = pTVar7, local_1e8 = uVar13, local_1e4 = uVar22, iVar5 != -1
            ) {
        iVar12 = *(int *)((longlong)pTVar4 + (longlong)iVar5 * 0x18 + 4);
        param_3 = local_198;
        pTVar7 = local_1b8;
        if (iVar5 < (int)uVar25) {
          bVar16 = (byte)uVar21 & 0x1f;
          uVar22 = (uint)uVar3 << bVar16 | (uint)uVar3 >> 0x20 - bVar16;
          uVar13 = uVar21;
          do {
            uVar22 = uVar22 >> 1 | (uint)((uVar22 & 1) != 0) << 0x1f;
            uVar21 = uVar13 - 1;
            if ((((int)uVar21 < 0) || ((int)uVar23 <= (int)uVar21)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), uVar23 = local_80, bVar8)) {
              pcVar2 = (code *)swi(3);
              EVar9 = (*pcVar2)();
              return EVar9;
            }
            puVar17 = (uint *)(local_a8 + 0x10);
            if (local_88 != (uint *)0x0) {
              puVar17 = local_88;
            }
            uVar10 = uVar21;
            if ((int)uVar21 < 0) {
              uVar10 = uVar13 + 0x1e;
            }
            uVar13 = uVar21;
          } while ((puVar17[(int)uVar10 >> 5] & uVar22) == 0);
          memmove(pTVar4 + iVar5,local_1b8 + (int)uVar21,0x18);
          if (((iVar5 < 0) || ((int)local_80 <= iVar5)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar2 = (code *)swi(3);
            EVar9 = (*pcVar2)();
            return EVar9;
          }
          puVar17 = (uint *)(local_a8 + 0x10);
          if (local_88 != (uint *)0x0) {
            puVar17 = local_88;
          }
          iVar11 = iVar5;
          if (iVar5 < 0) {
            iVar11 = iVar5 + 0x1f;
          }
          puVar17[iVar11 >> 5] = puVar17[iVar11 >> 5] | (int)local_1e0 << ((byte)iVar5 & 0x1f);
          uVar3 = local_1e0;
          param_3 = local_198;
          uVar13 = local_1e8;
          uVar22 = local_1e4;
          pTVar7 = local_1b8;
          pTVar4 = local_1b8;
          uVar23 = local_80;
        }
      }
      uVar21 = 0;
      if ((int)uVar22 <= (int)local_a8._8_4_) {
        uVar21 = ~(uVar13 | uVar25) >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), uVar23 = local_80, bVar8)) {
        pcVar2 = (code *)swi(3);
        EVar9 = (*pcVar2)();
        return EVar9;
      }
      iVar12 = (local_a8._8_4_ - uVar13) - uVar25;
      if (iVar12 != 0) {
        memmove((FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar25 * 0x18),
                (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar25 * 0x18) +
                (longlong)(int)uVar13 * 0x18,(longlong)iVar12 * 0x18);
        uVar23 = local_80;
      }
      local_a8._8_4_ = local_a8._8_4_ - uVar13;
      if ((((int)uVar13 < 0) || ((int)uVar23 < (int)uVar22)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3ee,L""), uVar23 = local_80, bVar8)) {
        pcVar2 = (code *)swi(3);
        EVar9 = (*pcVar2)();
        return EVar9;
      }
      if (uVar22 != uVar23) {
        puVar17 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar17 = local_88;
        }
        FBitArrayMemory::MemmoveBitsWordOrder
                  (puVar17,uVar25,puVar17,uVar22,(uVar23 - uVar13) - uVar25);
        uVar23 = local_80;
      }
      local_80 = uVar23 - uVar13;
      uVar21 = (int)local_80 >> 0x1f & 0x1f;
      uVar25 = local_80 + uVar21;
      iVar12 = (uVar25 & 0x1f) - uVar21;
      if (iVar12 != 0) {
        puVar17 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar17 = local_88;
        }
        puVar17[(int)uVar25 >> 5] =
             puVar17[(int)uVar25 >> 5] & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f);
      }
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10));
      local_74 = 0;
      local_78 = -1;
      if (local_a8._12_4_ != local_a8._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_a8._8_4_,(ForAnyElementType *)local_a8,local_a8._8_4_,
                   (int *)(local_a8 + 0xc));
      }
    }
    uVar3 = local_a8._0_8_;
    iVar12 = local_a8._8_4_ - local_74;
    if ((iVar12 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      EVar9 = (*pcVar2)();
      return EVar9;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>::FValueComparisonClass<_IEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet_::__l2::<lambda_1>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar3,iVar12,local_207[0],
               (FElementCompareClass<TSortableMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>::FValueComparisonClass<_public:_virtual_enum_EMappingQueryResult___cdecl_IEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet(UInputMappingContext_const_*,UInputAction_const_*,FKey,TArray<FMappingQueryIssue,TSizedDefaultAllocator<32>_>_&,EMappingQueryIssue)_::_2_::<lambda_1>_>_>
                *)&local_190);
  }
  uVar25 = local_60[0];
  uVar19 = 0;
  uVar24 = (ulonglong)local_60[0];
  if (local_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70.SecondaryData,0,0,4);
  }
  if (uVar25 == 0) goto LAB_14a6ebe70;
  uVar21 = uVar25;
  if (uVar25 < 2) {
    if (local_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      uVar21 = 0;
      goto LAB_14a6ebe17;
    }
  }
  else {
LAB_14a6ebe17:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70.SecondaryData,0,uVar21,4);
  }
  if (0 < (int)uVar25) {
    uVar20 = uVar19;
    do {
      FVar18 = (ForElementType<FSetElementId>)&local_70;
      if (local_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_70.SecondaryData;
      }
      uVar15 = (longlong)(int)uVar25 - 1U & uVar20;
      uVar20 = uVar20 + 1;
      *(undefined4 *)((longlong)FVar18 + uVar15 * 4) = 0xffffffff;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
LAB_14a6ebe70:
  uVar25 = 0;
  uVar21 = (uint)local_1e0;
  if (local_60[0] != 0) {
    pTStack_1d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_1d8 = 0;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1d4 = uVar21;
    if (local_80 != 0) {
      puVar17 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar17 = local_88;
      }
      uVar13 = *puVar17;
      uStack_1c0 = uVar25;
      while (uVar13 == 0) {
        uStack_1c0 = uStack_1c0 + 0x20;
        iVar12 = (int)uVar19;
        local_1d8 = iVar12 + 1;
        uVar19 = (ulonglong)local_1d8;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1d8)
        goto LAB_14a6ebf28;
        uVar13 = (puVar17 + 1)[iVar12];
      }
      uStack_1d4 = -uVar13 & uVar13;
      uVar19 = (ulonglong)uStack_1d4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1b0 = (int)lVar14;
      uStack_1c4 = (uStack_1c0 - 1) + local_1b0;
      if ((int)local_80 < (int)uStack_1c4) {
LAB_14a6ebf28:
        uStack_1c4 = local_80;
      }
    }
    local_1c8 = 0xffffffff;
    local_168 = (longlong *)local_a8;
    local_160._padding_ = CONCAT44(uStack_1d4,local_1d8);
    local_160.CurrentBitIndex = uStack_1c4;
    local_160.UnvisitedBitMask = 0xffffffff;
    local_160._28_4_ = uStack_1bc;
    local_160.BaseBitIndex = uStack_1c0;
    uVar13 = uStack_1c4;
    local_160.Array = pTStack_1d0;
    if ((int)uStack_1c4 < (int)local_80) {
      do {
        pUVar1 = *(UObject **)(*local_168 + (longlong)(int)uVar13 * 0x18);
        lVar14 = *local_168 + (longlong)(int)uVar13 * 0x18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        uVar22 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
                 -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar22 = (uVar22 >> 0x10 ^ uVar22) & local_60[0] - 1;
        *(uint *)(lVar14 + 0x14) = uVar22;
        FVar18 = (ForElementType<FSetElementId>)&local_70;
        if (local_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar18 = local_70.SecondaryData;
        }
        uVar19 = (longlong)(int)local_60[0] - 1U & (longlong)(int)uVar22;
        *(undefined4 *)(lVar14 + 0x10) = *(undefined4 *)((longlong)FVar18 + uVar19 * 4);
        *(uint *)((longlong)FVar18 + uVar19 * 4) = uVar13;
        local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
        uVar13 = local_160.CurrentBitIndex;
      } while (local_160.CurrentBitIndex < (local_160.Array)->NumBits);
    }
  }
  uVar13 = local_a8._8_4_ - local_74;
  local_200.Data = (FScriptContainerElement *)0x0;
  local_1f8 = 0;
  iStack_1f4 = 0;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&local_200,0,&iStack_1f4);
  }
  uVar13 = local_80;
  uStack_124 = uVar25;
  uStack_138 = uVar25;
  if (local_80 != 0) {
    puVar17 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar17 = local_88;
    }
    uVar22 = *puVar17;
    uStack_138 = 0;
    while (uVar22 == 0) {
      lVar14 = (longlong)(int)uStack_138;
      uVar25 = uVar25 + 0x20;
      uStack_138 = uStack_138 + 1;
      uStack_124 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_138)
      goto LAB_14a6ec0f1;
      uVar22 = (puVar17 + 1)[lVar14];
    }
    uVar21 = -uVar22 & uVar22;
    uVar19 = (ulonglong)uVar21 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1ac = (int)lVar14;
    uStack_124 = (uVar25 - 1) + local_1ac;
    if ((int)local_80 < (int)uStack_124) {
      uStack_124 = local_80;
    }
  }
LAB_14a6ec0f1:
  local_140 = (longlong *)local_a8;
  uStack_11c = local_ac;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uVar22 = local_80 & 0xffffffe0;
  iStack_118 = local_a8._8_4_ - local_74;
  uStack_128 = 0xffffffff;
  TStack_108.CurrentBitIndex = uStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uVar21,uStack_138);
  iVar12 = (int)local_80 >> 5;
  TStack_108._28_4_ = local_ac;
  TStack_108.BaseBitIndex = uVar25;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  bVar16 = (byte)local_80;
  uStack_134 = uVar21;
  local_120 = uVar25;
  local_110 = local_140;
  TStack_108.Array = local_130;
  if (((int)local_80 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    EVar9 = (*pcVar2)();
    return EVar9;
  }
  if (uVar13 != local_80) {
    puVar17 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar17 = local_88;
    }
    uVar25 = -1 << (bVar16 & 0x1f) & puVar17[iVar12];
    while (uVar25 == 0) {
      lVar14 = (longlong)iVar12;
      uVar22 = uVar22 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14a6ec211;
      uVar25 = (puVar17 + 1)[lVar14];
    }
    uVar19 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a8 = (int)lVar14;
    uVar13 = local_1a8 + -1 + uVar22;
    if ((int)local_80 < (int)uVar13) {
      uVar13 = local_80;
    }
  }
LAB_14a6ec211:
  while( true ) {
    plVar6 = local_110;
    if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
      local_208 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
    }
    if (((TStack_108.CurrentBitIndex == uVar13) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar6 == (longlong *)local_a8)) break;
    local_1f0 = *(undefined8 *)(*plVar6 + (longlong)TStack_108.CurrentBitIndex * 0x18);
    if (((local_200.Data <= (FScriptContainerElement *)&local_1f0) &&
        ((FScriptContainerElement *)&local_1f0 < local_200.Data + (longlong)iStack_1f4 * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar2 = (code *)swi(3);
      EVar9 = (*pcVar2)();
      return EVar9;
    }
    if (local_1f8 == iStack_1f4) {
      local_1f8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_200,&iStack_1f4);
    }
    lVar14 = (longlong)local_1f8;
    local_1f8 = local_1f8 + 1;
    *(undefined8 *)(local_200.Data + lVar14 * 8) = local_1f0;
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  pcVar2 = *(code **)(local_188->_padding_ + 0xe8);
  local_e0 = param_3->KeyName;
  local_d8 = (param_3->KeyDetails).Object;
  local_d0 = (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_d0->SharedReferenceCount = (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar9 = (*pcVar2)(local_188,&local_200,local_170,local_178);
  if (local_200.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data);
  }
  local_60[0] = 0;
  if (local_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_70.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return EVar9;
}

// QueryMapKeyInContextSet @ 14a6ec430

EMappingQueryResult __thiscall
IEnhancedInputSubsystemInterface::QueryMapKeyInContextSet
          (IEnhancedInputSubsystemInterface *this,
          TArray<UInputMappingContext_*,TSizedDefaultAllocator<32>_> *param_1,
          UInputMappingContext *param_2,UInputAction *param_3,FKey *param_4,
          TArray<FMappingQueryIssue,TSizedDefaultAllocator<32>_> *param_5,EMappingQueryIssue param_6
          )

{
  int *piVar1;
  atomic<int> *paVar2;
  EInputActionValueType EVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *_Src;
  UInputMappingContext *pUVar5;
  code *pcVar6;
  bool bVar7;
  EInputActionValueType EVar8;
  bool bVar9;
  EMappingQueryResult EVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  FString *pFVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  EMappingQueryResult EVar21;
  char cVar22;
  char cVar23;
  undefined1 local_e8;
  undefined1 local_e7 [3];
  uint local_e4;
  FScriptContainerElement local_e0 [8];
  UInputMappingContext *local_d8;
  UObject *pUStack_d0;
  FString local_c8;
  uint local_b8;
  FString local_b0;
  FScriptContainerElement local_a0 [8];
  UObject *local_98;
  UObject *pUStack_90;
  FInputMappingContextMappingData *local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FKey local_68;
  FString local_50;
  
  local_e4 = 0;
  if (param_3 == (UInputAction *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->KeyDetails).SharedReferenceCount.ReferenceController);
    return Error_InvalidAction;
  }
  piVar1 = &param_5->ArrayMax;
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_5->AllocatorInstance,0,piVar1);
  }
  pTVar4 = (param_4->KeyDetails).SharedReferenceCount.ReferenceController;
  local_68.KeyName = param_4->KeyName;
  local_68.KeyDetails.Object = (param_4->KeyDetails).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    paVar2 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_68.KeyDetails.SharedReferenceCount.ReferenceController = pTVar4;
  EVar8 = FInputActionValue::GetValueTypeFromKey(&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  EVar3 = param_3->ValueType;
  if ((EVar3 != EVar8) && ((EVar3 != Axis1D || (EVar8 != Boolean)))) {
    pFVar18 = (param_5->AllocatorInstance).Data;
    local_a0[0] = (FScriptContainerElement)0x20;
    if (EVar8 < EVar3) {
      local_a0[0] = (FScriptContainerElement)0x10;
    }
    local_98 = (UObject *)0x0;
    pUStack_90 = (UObject *)0x0;
    if (((pFVar18 <= local_a0) && (local_a0 < pFVar18 + (longlong)*piVar1 * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      EVar10 = (*pcVar6)();
      return EVar10;
    }
    iVar11 = param_5->ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&param_5->AllocatorInstance,piVar1);
    }
    pFVar18 = (param_5->AllocatorInstance).Data;
    lVar12 = (longlong)iVar11;
    param_5->ArrayNum = iVar11 + 1;
    pFVar18[lVar12 * 0x18] = local_a0[0];
    *(UObject **)(pFVar18 + lVar12 * 0x18 + 8) = local_98;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_98);
    }
    *(UObject **)(pFVar18 + lVar12 * 0x18 + 0x10) = pUStack_90;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_90 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUStack_90);
    }
  }
  cVar22 = '\0';
  cVar23 = '\0';
  EVar21 = MappingAvailable;
  EVar10 = MappingAvailable;
  plVar13 = (longlong *)(**(code **)(this->_padding_ + 0x18))(this);
  if (plVar13 != (longlong *)0x0) {
    lVar12 = *plVar13;
    uVar14 = (**(code **)(lVar12 + 0x348))(plVar13);
    lVar12 = (**(code **)(lVar12 + 0x360))(plVar13,uVar14);
    if (lVar12 != 0) {
      iVar11 = *(int *)(lVar12 + 0x38);
      _Src = *(void **)(lVar12 + 0x30);
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.Data.ArrayNum = iVar11;
      if (iVar11 == 0) {
        local_b0.Data.ArrayMax = 0;
        pFVar15 = &local_b0;
        bVar7 = true;
        bVar9 = false;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,0,(ForAnyElementType *)&local_b0,iVar11,&local_b0.Data.ArrayMax);
        memcpy(local_b0.Data.AllocatorInstance.Data,_Src,(longlong)iVar11 * 2);
        pFVar15 = &local_b0;
        bVar7 = true;
        bVar9 = false;
      }
      goto LAB_14a6ec6e4;
    }
  }
  pFVar15 = ::FString::FString(&local_50,L"");
  bVar7 = false;
  bVar9 = true;
LAB_14a6ec6e4:
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = (pFVar15->Data).ArrayNum;
  lVar12 = (longlong)local_c8.Data.ArrayNum;
  pFVar18 = (pFVar15->Data).AllocatorInstance.Data;
  if (local_c8.Data.ArrayNum == 0) {
    local_c8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,local_c8.Data.ArrayNum,
               &local_c8.Data.ArrayMax);
    memcpy(local_c8.Data.AllocatorInstance.Data,pFVar18,lVar12 * 2);
  }
  if ((bVar9) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((bVar7) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  local_e4 = param_1->ArrayNum;
  uVar16 = (ulonglong)(int)local_e4;
  pFVar20 = (param_1->AllocatorInstance).Data;
  pFVar18 = pFVar20 + uVar16 * 8;
  local_70 = pFVar18;
  do {
    local_80 = pFVar20;
    if (param_1->ArrayNum != (int)uVar16) {
      local_e8 = 0;
      `TCheckedPointerIterator<UInputMappingContext_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_e8);
    }
    if (pFVar20 == pFVar18) {
      if (cVar23 == '\0') {
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_4->KeyDetails).SharedReferenceCount.ReferenceController);
        return Error_InputContextNotInActiveContexts;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->KeyDetails).SharedReferenceCount.ReferenceController);
      return EVar10;
    }
    pUVar5 = *(UInputMappingContext **)pFVar20;
    if (pUVar5 != (UInputMappingContext *)0x0) {
      if (cVar23 == '\x01') {
        cVar23 = '\x02';
      }
      else {
        cVar23 = cVar22;
        if (pUVar5 == param_2) {
          cVar23 = '\x01';
        }
      }
      local_88 = TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
                 ::Find((TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
                         *)&pUVar5->MappingProfileOverrides,&local_c8);
      if (local_88 == (FInputMappingContextMappingData *)0x0) {
        local_88 = &pUVar5->DefaultKeyMappings;
      }
      local_b8 = (local_88->Mappings).ArrayNum;
      uVar16 = (ulonglong)(int)local_b8;
      pFVar19 = (local_88->Mappings).AllocatorInstance.Data;
      pFVar17 = pFVar19 + uVar16 * 0x50;
      local_78 = pFVar17;
      while( true ) {
        if ((local_88->Mappings).ArrayNum != (int)uVar16) {
          local_e7[0] = 0;
          `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_e7);
        }
        pFVar18 = local_70;
        pFVar20 = local_80;
        cVar22 = cVar23;
        if (pFVar19 == pFVar17) break;
        if ((*(FName *)(pFVar19 + 0x28) == param_4->KeyName) &&
           (lVar12 = *(longlong *)(pFVar19 + 0x20), lVar12 != 0)) {
          local_e0[0] = (FScriptContainerElement)0x0;
          local_d8 = (UInputMappingContext *)0x0;
          pUStack_d0 = (UObject *)0x0;
          if (cVar23 == '\0') {
            if (*(char *)(lVar12 + 0x41) != '\0') {
              local_e0[0] = (FScriptContainerElement)0x4;
            }
          }
          else if (cVar23 == '\x02') {
            if (param_3->bConsumeInput != false) {
              local_e0[0] = (FScriptContainerElement)0x2;
            }
          }
          else if (cVar23 == '\x01') {
            local_e0[0] = (FScriptContainerElement)0x8;
          }
          if (*(char *)(lVar12 + 0x43) == '\0') {
            if (local_e0[0] == (FScriptContainerElement)0x0) goto LAB_14a6ec9cf;
          }
          else {
            local_e0[0] = (FScriptContainerElement)0x1;
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          local_d8 = pUVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (*(UObject **)(pFVar19 + 0x20) != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(*(UObject **)(pFVar19 + 0x20));
          }
          pUStack_d0 = *(UObject **)(pFVar19 + 0x20);
          pFVar18 = (param_5->AllocatorInstance).Data;
          if (((pFVar18 <= local_e0) && (local_e0 < pFVar18 + (longlong)param_5->ArrayMax * 0x18))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar6 = (code *)swi(3);
            EVar10 = (*pcVar6)();
            return EVar10;
          }
          iVar11 = param_5->ArrayNum;
          if (iVar11 == param_5->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          pFVar18 = (param_5->AllocatorInstance).Data;
          lVar12 = (longlong)iVar11;
          param_5->ArrayNum = iVar11 + 1;
          pFVar18[lVar12 * 0x18] = local_e0[0];
          *(UInputMappingContext **)(pFVar18 + lVar12 * 0x18 + 8) = local_d8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_d8 != (UInputMappingContext *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_d8);
          }
          *(UObject **)(pFVar18 + lVar12 * 0x18 + 0x10) = pUStack_d0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_d0 != (UObject *)0x0)
             ) {
            UE::GC::MarkAsReachable(pUStack_d0);
          }
          pFVar17 = local_78;
          EVar10 = EVar21;
          if (((byte)local_e0[0] & param_6) != NoIssue) {
            EVar21 = NotMappable;
            EVar10 = NotMappable;
          }
        }
LAB_14a6ec9cf:
        pFVar19 = pFVar19 + 0x50;
        uVar16 = (ulonglong)local_b8;
      }
    }
    uVar16 = (ulonglong)local_e4;
    pFVar20 = pFVar20 + 8;
  } while( true );
}

// RebuildControlMappings @ 14a6ece50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::RebuildControlMappings(IEnhancedInputSubsystemInterface *this)

{
  TObjectPtr<UInputMappingContext_const_>_u_0 *pTVar1;
  FKey *pFVar2;
  TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  FEnhancedActionKeyMapping *pFVar5;
  TSharedPtr<FKeyDetails,1> *pTVar6;
  byte *pbVar7;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *this_00;
  TObjectPtr<UInputMappingContext_const_>_u_0 *pTVar8;
  TMap<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
  *this_01;
  char cVar9;
  UPlatformSettingsManager *this_02;
  UObject *pUVar10;
  TObjectPtr<UInputAction_const_>_u_0 TVar11;
  TReferenceControllerBase<1> *pTVar12;
  FKeyDetails *pFVar13;
  UInputAction *pUVar14;
  FName FVar15;
  code *pcVar16;
  undefined8 uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  double dVar19;
  EInputActionValueType EVar20;
  undefined7 uVar21;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *pTVar22;
  FEnhancedActionKeyMapping *pFVar23;
  longlong *plVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  UEnhancedPlayerInput *pUVar31;
  UEnhancedInputDeveloperSettings *pUVar32;
  UClass *pUVar33;
  UEnhancedInputPlatformSettings *this_03;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar34;
  FAppliedInputContextData *pFVar35;
  UEnhancedInputUserSettings *this_04;
  UEnhancedPlayerMappableKeyProfile *pUVar36;
  FString *pFVar37;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar38;
  FKeyConsumptionOptions *this_05;
  int *piVar39;
  FKeyState *pFVar40;
  FInputActionInstance *pFVar41;
  FInputActionValue *pFVar42;
  FScriptContainerElement FVar43;
  ulonglong uVar44;
  longlong lVar45;
  ForElementType<unsigned_int> FVar46;
  ForElementType<FSetElementId> FVar47;
  FGameplayTagQuery *pFVar48;
  ulonglong uVar49;
  ForAnyElementType FVar50;
  ForAnyElementType FVar51;
  wchar_t *pwVar52;
  FGameplayTagContainer *pFVar53;
  UPlayerMappableKeySettings *pUVar54;
  FScriptContainerElement *pFVar55;
  FScriptContainerElement *pFVar56;
  FKey *pFVar57;
  FScriptContainerElement *pFVar58;
  wchar_t *pwVar59;
  uint uVar60;
  FEnhancedActionKeyMapping *pFVar61;
  TArray<UEnhancedPlayerInput::FDependentChordTracker,TSizedDefaultAllocator<32>_> *pTVar62;
  undefined1 auStackY_6c8 [32];
  ForAnyElementType local_670;
  undefined8 local_668;
  ForAnyElementType local_660;
  undefined8 local_658;
  undefined1 local_650;
  byte local_64f;
  undefined1 local_64e;
  undefined1 local_64d;
  undefined1 local_64c;
  undefined1 local_64b;
  undefined1 local_64a;
  undefined1 local_649;
  undefined1 local_648;
  undefined1 local_647;
  undefined1 local_646;
  undefined1 local_645;
  undefined1 local_644;
  undefined1 local_643 [3];
  uint local_640;
  ForAnyElementType local_638;
  int local_630;
  int local_62c;
  uint local_628;
  uint local_624;
  IEnhancedInputSubsystemInterface *local_620;
  TArray<int,TSizedDefaultAllocator<32>_> local_618;
  undefined1 local_608;
  undefined1 local_607 [7];
  UObject *local_600;
  UEnhancedPlayerInput *local_5f8;
  UObject *local_5f0;
  UObject *local_5e8;
  FEnhancedActionKeyMapping *local_5e0;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *local_5d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5d0;
  int local_5b0;
  undefined4 uStack_5ac;
  FEnhancedActionKeyMapping *local_5a8;
  FEnhancedActionKeyMapping *local_5a0;
  FKey *local_598;
  UEnhancedPlayerMappableKeyProfile *local_590;
  uint local_588;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> local_580;
  TArray<UEnhancedPlayerInput::FDependentChordTracker,TSizedDefaultAllocator<32>_> *local_570;
  FGameplayTagContainer *local_568;
  FName local_560;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *local_558;
  longlong lStack_550;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_548;
  undefined8 uStack_540;
  longlong lStack_538;
  int local_530;
  undefined4 uStack_52c;
  FName local_528;
  FName local_520;
  FKey *local_518;
  FString local_510;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_500;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4c0;
  undefined1 local_4a0 [12];
  undefined1 local_494 [12];
  FSharedReferencer<1> local_488;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *local_480;
  TMap<FKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,int,0>_> *local_478;
  FValueComparisonClass<_private:_void___cdecl_IEnhancedInputSubsystemInterface::RebuildControlMappings(void)_::_2_::<lambda_1>_>
  local_470;
  FName local_468;
  undefined8 local_460;
  UObject *local_458;
  FName local_450;
  longlong local_448;
  TObjectPtr<UInputMappingContext_const_>_u_0 local_440;
  UObject *local_438;
  undefined8 *local_430;
  FString local_428;
  FKeyDetails *local_418;
  TReferenceControllerBase<1> *pTStack_410;
  UClass *local_408;
  FName local_400;
  FString local_3f8;
  undefined1 local_3e8 [12];
  uint uStack_3dc;
  TBitArray<FDefaultBitArrayAllocator> *local_3d8;
  undefined8 uStack_3d0;
  longlong local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  longlong *local_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b0;
  undefined8 uStack_390;
  code *local_388;
  undefined8 **local_380;
  TObjectPtr<UInputMappingContext_const_>_u_0 *local_378;
  FAppliedInputContextData *local_370;
  code *local_368;
  undefined1 *local_360;
  FKey local_358;
  undefined1 local_340 [40];
  int local_318;
  undefined4 uStack_314;
  FString local_310;
  FString local_300;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *local_2f0;
  longlong lStack_2e8;
  TBitArray<FDefaultBitArrayAllocator> *local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  FString local_2c0;
  FGameplayTagQuery local_2b0;
  TRangedForIterator local_268;
  TVector<double>_u_0 local_238;
  undefined8 uStack_220;
  FString local_218;
  FString local_208;
  FString local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e8;
  FInputActionValue local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  undefined1 local_188 [32];
  ForElementType<unsigned_int> local_168;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  undefined1 local_150 [8];
  ForElementType<FSetElementId> local_148;
  int local_140;
  undefined1 local_138 [40];
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined1 local_100 [8];
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  undefined8 local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [40];
  int local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_640 = 0;
  if ((this->MappingRebuildPending != None) &&
     (local_620 = this, pUVar31 = (UEnhancedPlayerInput *)(**(code **)(this->_padding_ + 0x10))(),
     pUVar31 != (UEnhancedPlayerInput *)0x0)) {
    local_568 = &pUVar31->CurrentInputMode;
    local_5f8 = pUVar31;
    pUVar32 = GetDefault<UEnhancedInputDeveloperSettings>();
    local_480 = &pUVar31->EnhancedActionMappings;
    local_638.Data = (local_480->AllocatorInstance).Data;
    local_64f = pUVar32->field_0xf0;
    (local_480->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_630 = (pUVar31->EnhancedActionMappings).ArrayNum;
    local_62c = (pUVar31->EnhancedActionMappings).ArrayMax;
    (pUVar31->EnhancedActionMappings).ArrayNum = 0;
    (pUVar31->EnhancedActionMappings).ArrayMax = 0;
    DestructItems<FEnhancedActionKeyMapping,int>
              ((FEnhancedActionKeyMapping *)(local_480->AllocatorInstance).Data,0);
    local_478 = &pUVar31->EnhancedKeyBinds;
    (pUVar31->EnhancedActionMappings).ArrayNum = 0;
    TSet<TTuple<FKey,int>,TDefaultMapHashableKeyFuncs<FKey,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FKey,int>,TDefaultMapHashableKeyFuncs<FKey,int,0>,FDefaultSetAllocator>
                *)local_478);
    pbVar7 = (byte *)((longlong)&pUVar31->_padding_ + 4);
    *pbVar7 = *pbVar7 & 0xfe;
    local_494._4_8_ = &pUVar31->KeyConsumptionData;
    TSet<TTuple<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>,FDefaultSetAllocator>
             *)local_494._4_8_);
    this_01 = &this->AppliedContextRedirects;
    TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
             *)this_01);
    TMap<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
    ::
    TMap<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
              ((TMap<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                *)local_98,&pUVar31->AppliedInputContextData);
    pUVar33 = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
    if ((pUVar33->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar33);
    }
    this_02 = (UPlatformSettingsManager *)(pUVar33->ClassDefaultObject).field0_0x0.DebugPtr;
    local_408 = UEnhancedInputPlatformSettings::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_408 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_408);
    }
    this_03 = (UEnhancedInputPlatformSettings *)
              UPlatformSettingsManager::GetSettingsForPlatform
                        (this_02,(TSubclassOf<UPlatformSettings>)&local_408);
    if (this_03 == (UEnhancedInputPlatformSettings *)0x0) {
      pFVar37 = GetTypeName<UEnhancedInputPlatformSettings>(&local_1f8);
      if ((pFVar37->Data).ArrayNum == 0) {
        pwVar59 = L"";
      }
      else {
        pwVar59 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar59);
    }
    pUVar33 = UEnhancedInputPlatformSettings::StaticClass();
    iVar28 = (int)pUVar33->_padding_;
    if ((*(int *)(this_03->_padding_ + 0x38) < iVar28) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar28 * 8) !=
        &pUVar33->_padding_)) {
      pFVar37 = GetTypeName<UEnhancedInputPlatformSettings>(&local_218);
      pwVar59 = L"";
      if ((pFVar37->Data).ArrayNum == 0) {
        pwVar52 = L"";
      }
      else {
        pwVar52 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
      }
      pFVar37 = GetFullNameForCastLogError<UPlatformSettings>
                          (&local_208,(UPlatformSettings *)this_03);
      if ((pFVar37->Data).ArrayNum != 0) {
        pwVar59 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar59,pwVar52);
    }
    local_bc = 0x80;
    local_430 = (undefined8 *)local_e8;
    local_e8._0_8_ = 0;
    local_380 = &local_430;
    local_e8._8_8_ = 0;
    local_c8 = 0;
    local_388 = UE::Core::Private::Function::
                TFunctionRefCaller<`UEnhancedInputPlatformSettings::GetAllMappingContextRedirects'::__l2::<lambda_1>,void,UEnhancedInputPlatformData_const_&>
                ::Call;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    UEnhancedInputPlatformSettings::ForEachInputData
              (this_03,(TFunctionRef<void___cdecl(UEnhancedInputPlatformData_const_&)> *)&local_388)
    ;
    local_4c0._padding_._4_4_ = 1;
    local_4c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    local_4c0._padding_._0_4_ = 0;
    local_4c0.UnvisitedBitMask = 0xffffffff;
    local_4c0.CurrentBitIndex = 0;
    local_4c0.BaseBitIndex = 0;
    if (local_c0 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4c0);
    }
    TStack_5d0._padding_ = CONCAT44(local_4c0._padding_._4_4_,(undefined4)local_4c0._padding_);
    local_5d8 = (TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                 *)local_e8;
    TStack_5d0._16_8_ = CONCAT44(local_4c0.CurrentBitIndex,local_4c0.UnvisitedBitMask);
    TStack_5d0._24_8_ = CONCAT44(local_4c0._28_4_,local_4c0.BaseBitIndex);
    local_5b0 = local_e8._8_4_ - local_b4;
    TStack_5d0.Array = local_4c0.Array;
    local_3d8 = local_4c0.Array;
    uStack_3bc = uStack_5ac;
    local_3e8._0_8_ = local_5d8;
    unique0x100036ea = TStack_5d0._padding_;
    uStack_3d0 = TStack_5d0._16_8_;
    local_3c8 = TStack_5d0._24_8_;
    iStack_3c0 = local_5b0;
    pTVar34 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_1e8,(TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),
                         local_c0);
    local_5d8 = (TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                 *)local_e8;
    TStack_5d0._padding_ = pTVar34->_padding_;
    TStack_5d0.Array = pTVar34->Array;
    TStack_5d0.UnvisitedBitMask = pTVar34->UnvisitedBitMask;
    TStack_5d0.CurrentBitIndex = pTVar34->CurrentBitIndex;
    TStack_5d0._24_8_ = *(undefined8 *)&pTVar34->BaseBitIndex;
    local_5b0 = local_e8._8_4_ - local_b4;
    local_268.InitialNum = local_e8._8_4_ - local_b4;
    local_268._44_4_ = uStack_5ac;
    local_268._padding_ = (longlong)local_5d8;
    local_268._padding_ = TStack_5d0._padding_;
    local_268._padding_ = (longlong)TStack_5d0.Array;
    local_268._padding_ = TStack_5d0._16_8_;
    local_268._padding_ = TStack_5d0._24_8_;
    bVar25 = TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_3e8,&local_268);
    uVar60 = 0;
    if (bVar25) {
      do {
        pTVar8 = (TObjectPtr<UInputMappingContext_const_>_u_0 *)
                 (*(longlong *)local_3e8._0_8_ + (longlong)uStack_3d0._4_4_ * 0x18);
        pUVar10 = *(UObject **)(*(longlong *)local_3e8._0_8_ + (longlong)uStack_3d0._4_4_ * 0x18);
        if ((pUVar10 == (UObject *)0x0) ||
           (pTVar1 = pTVar8 + 1, pTVar8[1].DebugPtr == (UInputMappingContext *)0x0)) {
          if (1 < (byte)LogEnhancedInput._0_1_) {
            (**(code **)(this_03->_padding_ + 0x248))(this_03);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
          }
        }
        else {
          local_438 = pUVar10;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar10);
          }
          pFVar35 = TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                    ::Find((TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                            *)local_98,(TObjectPtr<UInputMappingContext_const_>)&local_438);
          if (pFVar35 != (FAppliedInputContextData *)0x0) {
            local_440.DebugPtr = *(UInputMappingContext **)pTVar8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_440.DebugPtr != (UInputMappingContext *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_440.DebugPtr);
            }
            TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
            ::Remove((TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                      *)local_98,(TObjectPtr<UInputMappingContext_const_>)&local_440);
            local_378 = pTVar1;
            local_370 = pFVar35;
            TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TObjectPtr<UInputMappingContext_const_>_const_&,FAppliedInputContextData_const_&>_>
                      ((TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
                        *)local_98,
                       (TPairInitializer<TObjectPtr<UInputMappingContext_const_>_const_&,FAppliedInputContextData_const_&>
                        *)local_4a0,(bool *)&local_378);
            TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
            ::
            Emplace<TObjectPtr<UInputMappingContext_const_>_const_&,TObjectPtr<UInputMappingContext_const_>_const_&>
                      ((TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
                        *)this_01,(TObjectPtr<UInputMappingContext_const_> *)&pTVar8->ObjectPtr,
                       (TObjectPtr<UInputMappingContext_const_> *)&pTVar1->ObjectPtr);
            if ((this_03->bShouldLogMappingContextRedirects != false) &&
               (4 < (byte)LogEnhancedInput._0_1_)) {
              local_450 = *(FName *)((longlong)pTVar1->DebugPtr + 0x18);
              ::FName::ToString(&local_450,&local_3f8);
              local_468 = *(FName *)((longlong)pTVar8->DebugPtr + 0x18);
              ::FName::ToString(&local_468,&local_428);
              (**(code **)(this_03->_padding_ + 0x248))(this_03);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput)
              ;
              if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_428.Data.AllocatorInstance.Data);
              }
              if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0 & ~uStack_3dc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3e8 + 8));
        bVar25 = TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_3e8,&local_268);
        this = local_620;
        uVar60 = local_640;
      } while (bVar25);
    }
    pUVar36 = (UEnhancedPlayerMappableKeyProfile *)0x0;
    local_a0 = 0;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
    local_470.Predicate.Predicate =
         (TDereferenceWrapper<FAppliedInputContextData,_private:_void___cdecl_IEnhancedInputSubsystemInterface::RebuildControlMappings(void)_::_2_::<lambda_1>_>
          )local_607;
    TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>::FValueComparisonClass<_IEnhancedInputSubsystemInterface::RebuildControlMappings_::__l2::<lambda_1>_>_>
              ((TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
                *)local_98,&local_470);
    pTVar62 = &pUVar31->DependentChordActions;
    local_138._0_8_ = (FScriptContainerElement *)0x0;
    local_138._8_8_ = 0;
    piVar39 = &(pUVar31->DependentChordActions).ArrayMax;
    local_138._32_8_ = (ForElementType<unsigned_int>)0x0;
    local_110 = 0;
    local_10c = 0x80;
    local_108 = -1;
    local_104 = 0;
    local_f8 = (ForElementType<FSetElementId>)0x0;
    local_f0 = 0;
    local_618.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_618.ArrayNum = 0;
    local_618.ArrayMax = 0;
    (pUVar31->DependentChordActions).ArrayNum = 0;
    local_570 = pTVar62;
    if (*piVar39 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar62->AllocatorInstance,0,piVar39);
    }
    this_04 = (UEnhancedInputUserSettings *)(**(code **)(this->_padding_ + 0x18))(this);
    if (this_04 != (UEnhancedInputUserSettings *)0x0) {
      pUVar36 = UEnhancedInputUserSettings::GetActiveKeyProfile(this_04);
    }
    local_500.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_660.Data = (FScriptContainerElement *)0x0;
    local_658 = 0;
    local_500._padding_._0_4_ = 0;
    local_500._padding_._4_4_ = 1;
    local_500.UnvisitedBitMask = 0xffffffff;
    local_500.CurrentBitIndex = 0;
    local_500.BaseBitIndex = 0;
    local_590 = pUVar36;
    if (local_70 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_500);
    }
    TStack_3b0._padding_ = CONCAT44(local_500._padding_._4_4_,(undefined4)local_500._padding_);
    local_3b8 = (longlong *)local_98;
    TStack_3b0.CurrentBitIndex = local_500.CurrentBitIndex;
    TStack_3b0.UnvisitedBitMask = local_500.UnvisitedBitMask;
    TStack_3b0._28_4_ = local_500._28_4_;
    TStack_3b0.BaseBitIndex = local_500.BaseBitIndex;
    local_318 = local_98._8_4_ - local_64;
    local_340._16_8_ = local_500.Array;
    uStack_390 = CONCAT44(uStack_314,local_318);
    TStack_3b0.Array = local_500.Array;
    local_340._0_8_ = local_3b8;
    local_340._8_8_ = TStack_3b0._padding_;
    local_340._24_8_ = TStack_3b0._16_8_;
    local_340._32_8_ = TStack_3b0._24_8_;
    pTVar34 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_340,
                         (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
    local_558 = (TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                 *)local_98;
    lStack_550 = pTVar34->_padding_;
    pTStack_548 = pTVar34->Array;
    uStack_540._0_4_ = pTVar34->UnvisitedBitMask;
    uStack_540._4_4_ = pTVar34->CurrentBitIndex;
    lStack_538 = *(longlong *)&pTVar34->BaseBitIndex;
    local_530 = local_98._8_4_ - local_64;
    uStack_2c8 = CONCAT44(uStack_52c,local_530);
    pFVar53 = &pUVar31->CurrentInputMode;
    local_2f0 = local_558;
    lStack_2e8 = lStack_550;
    local_2e0 = pTStack_548;
    uStack_2d8 = uStack_540;
    local_2d0 = lStack_538;
    while( true ) {
      plVar24 = local_3b8;
      if ((int)local_3b8[1] - *(int *)((longlong)local_3b8 + 0x34) != (int)uStack_390) {
        local_650 = 0;
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_650);
      }
      if (((TStack_3b0.CurrentBitIndex == uStack_2d8._4_4_) && (TStack_3b0.Array == local_2e0)) &&
         ((TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
           *)plVar24 == local_2f0)) break;
      local_670.Data = (FScriptContainerElement *)0x0;
      lVar45 = *(longlong *)(*plVar24 + (longlong)TStack_3b0.CurrentBitIndex * 0x18);
      local_668 = 0;
      if (((local_64f & 0x10) == 0) || (cVar9 = *(char *)(lVar45 + 0xa0), cVar9 == '\x02')) {
LAB_14a6ed6a1:
        bVar25 = false;
      }
      else {
        uVar60 = uVar60 | 1;
        if (cVar9 == '\0') {
          pUVar32 = GetDefault<UEnhancedInputDeveloperSettings>();
          pFVar48 = &pUVar32->DefaultMappingContextInputModeQuery;
LAB_14a6ed67d:
          FGameplayTagQuery::FGameplayTagQuery(&local_2b0,pFVar48);
        }
        else {
          if (cVar9 == '\x01') {
            pFVar48 = (FGameplayTagQuery *)(lVar45 + 0xa8);
            goto LAB_14a6ed67d;
          }
          local_448 = lVar45;
          `UInputMappingContext::GetInputModeQuery'::__l7::<lambda_1>::operator()(&local_448);
          FGameplayTagQuery::FGameplayTagQuery(&local_2b0);
        }
        bVar25 = FGameplayTagQuery::Matches(&local_2b0,pFVar53);
        if (bVar25) goto LAB_14a6ed6a1;
        bVar25 = true;
      }
      if ((uVar60 & 1) != 0) {
        uVar60 = uVar60 & 0xfffffffe;
        if (local_2b0.AutoDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_2b0.AutoDescription.Data.AllocatorInstance.Data);
        }
        if (local_2b0.UserDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_2b0.UserDescription.Data.AllocatorInstance.Data);
        }
        if (local_2b0.QueryTokenStream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.QueryTokenStream.AllocatorInstance.Data);
        }
        if (local_2b0.TagDictionary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.TagDictionary.AllocatorInstance.Data);
        }
      }
      if (bVar25) {
        if (4 < (byte)LogEnhancedInput._0_1_) {
          FGameplayTagContainer::ToString(local_568,&local_300);
          if (lVar45 == 0) {
            ::FString::FString(&local_510,L"None");
          }
          else {
            local_400 = *(FName *)(lVar45 + 0x18);
            ::FName::ToString(&local_400,&local_510);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
          if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_510.Data.AllocatorInstance.Data);
          }
          if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.Data.AllocatorInstance.Data);
          }
        }
        DestructItems<FKey,int>((FKey *)local_670.Data,(int)local_668);
        if ((FKey *)local_670.Data != (FKey *)0x0) {
          FMemory::Free(local_670.Data);
        }
      }
      else {
        if (pUVar36 == (UEnhancedPlayerMappableKeyProfile *)0x0) {
          uVar60 = uVar60 | 4;
          local_640 = uVar60;
          pFVar37 = ::FString::FString(&local_310,L"");
        }
        else {
          uVar60 = uVar60 | 2;
          local_640 = uVar60;
          pFVar37 = ::FString::FString(&local_2c0,&pUVar36->ProfileIdentifierString);
        }
        pTVar38 = &TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
                   ::Find((TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
                           *)(lVar45 + 0x50),pFVar37)->Mappings;
        if (pTVar38 == (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)0x0) {
          pTVar38 = (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)(lVar45 + 0x40)
          ;
        }
        ReorderMappings(this,&local_580,pTVar38,pTVar62);
        if (((uVar60 & 4) != 0) &&
           (uVar60 = uVar60 & 0xfffffffb, local_640 = uVar60,
           local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_310.Data.AllocatorInstance.Data);
        }
        if (((uVar60 & 2) != 0) &&
           (local_640 = uVar60 & 0xfffffffd,
           local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        uVar44 = (ulonglong)local_580.ArrayNum;
        local_624 = local_580.ArrayNum;
        local_5a8 = (FEnhancedActionKeyMapping *)(local_580.AllocatorInstance.Data + uVar44 * 0x50);
        uVar49 = uVar44;
        FVar51.Data = local_580.AllocatorInstance.Data;
        while( true ) {
          pFVar61 = local_5a8;
          local_5e0 = (FEnhancedActionKeyMapping *)FVar51.Data;
          if ((int)uVar44 != (int)uVar49) {
            local_64e = 0;
            `TCheckedPointerIterator<FEnhancedActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_64e);
          }
          if ((FEnhancedActionKeyMapping *)FVar51.Data == pFVar61) break;
          if ((longlong)local_658 < 0) {
            DestructItems<FKey,int>((FKey *)local_660.Data,(uint)local_658);
            bVar25 = local_658._4_4_ != 0;
            local_658 = (ulonglong)local_658._4_4_ << 0x20;
            if (bVar25) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,&local_660,0,(int *)((longlong)&local_658 + 4));
            }
          }
          else {
            DestructItems<FKey,int>((FKey *)local_660.Data,(uint)local_658);
            local_658 = local_658 & 0xffffffff00000000;
          }
          if (((FEnhancedActionKeyMapping *)FVar51.Data)->SettingBehavior ==
              InheritSettingsFromAction) {
            TVar11 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Action).field0_0x0;
            pUVar54 = (UPlayerMappableKeySettings *)0x0;
            if ((TVar11.DebugPtr != (UInputAction *)0x0) &&
               (pUVar54 = *(UPlayerMappableKeySettings **)((longlong)TVar11 + 0x70),
               UE::GC::GIsIncrementalReachabilityPending != false)) {
              if (pUVar54 == (UPlayerMappableKeySettings *)0x0) goto LAB_14a6ed9d7;
              UE::GC::MarkAsReachable((UObject *)pUVar54);
            }
LAB_14a6ed956:
            if (pUVar54 == (UPlayerMappableKeySettings *)0x0) goto LAB_14a6ed9d7;
            if (pUVar36 == (UEnhancedPlayerMappableKeyProfile *)0x0) goto LAB_14a6eda1a;
            if ((pUVar54->SupportedKeyProfileIds).ArrayNum == 0) goto LAB_14a6ed9dc;
            pFVar56 = (pUVar54->SupportedKeyProfileIds).AllocatorInstance.Data;
            pFVar55 = pFVar56 + (longlong)(pUVar54->SupportedKeyProfileIds).ArrayNum * 0x10;
            if (pFVar56 == pFVar55) goto LAB_14a6ee3f0;
            do {
              iVar28 = *(int *)(pFVar56 + 8);
              iVar30 = (pUVar36->ProfileIdentifierString).Data.ArrayNum;
              if (iVar28 == iVar30) {
                if (iVar28 < 2) goto LAB_14a6ed9dc;
                iVar28 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)pFVar56,
                                    (wchar_t *)
                                    (pUVar36->ProfileIdentifierString).Data.AllocatorInstance.Data);
                bVar25 = iVar28 == 0;
              }
              else {
                bVar25 = iVar28 + iVar30 == 1;
              }
              if (bVar25) goto LAB_14a6ed9dc;
              pFVar56 = pFVar56 + 0x10;
            } while (pFVar56 != pFVar55);
            uVar44 = (ulonglong)(uint)local_580.ArrayNum;
            FVar51.Data = FVar51.Data + 0x50;
            uVar49 = (ulonglong)local_624;
          }
          else {
            if (((FEnhancedActionKeyMapping *)FVar51.Data)->SettingBehavior == OverrideSettings) {
              pUVar54 = (((FEnhancedActionKeyMapping *)FVar51.Data)->PlayerMappableKeySettings).
                        field0_0x0.DebugPtr;
              goto LAB_14a6ed956;
            }
LAB_14a6ed9d7:
            if (pUVar36 != (UEnhancedPlayerMappableKeyProfile *)0x0) {
LAB_14a6ed9dc:
              pUVar33 = UEnhancedInputDeveloperSettings::StaticClass();
              if ((pUVar33->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar33);
              }
              if ((*(byte *)((pUVar33->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 2) != 0) {
                (**(code **)(pUVar36->_padding_ + 0x2d0))(pUVar36,FVar51.Data);
              }
            }
LAB_14a6eda1a:
            if ((uint)local_658 == 0) {
              pFVar57 = &((FEnhancedActionKeyMapping *)FVar51.Data)->Key;
              if (((local_660.Data <= pFVar57) &&
                  (pFVar57 < local_660.Data + (longlong)(int)local_658._4_4_ * 0x18)) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar25)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              if ((uint)local_658 == local_658._4_4_) {
                iVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_660,(int *)((longlong)&local_658 + 4));
                local_658 = CONCAT44(local_658._4_4_,iVar28);
              }
              lVar45 = (longlong)(int)(uint)local_658;
              local_658 = CONCAT44(local_658._4_4_,(uint)local_658 + 1);
              *(FName *)&local_660.Data[lVar45 * 0x18].field_0x0 = pFVar57->KeyName;
              *(FKeyDetails **)(local_660.Data + lVar45 * 0x18 + 8) =
                   (((FEnhancedActionKeyMapping *)FVar51.Data)->Key).KeyDetails.Object;
              pTVar12 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Key).KeyDetails.
                        SharedReferenceCount.ReferenceController;
              *(TReferenceControllerBase<1> **)(local_660.Data + lVar45 * 0x18 + 0x10) = pTVar12;
              if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar12->SharedReferenceCount =
                     (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
                UNLOCK();
              }
            }
            uVar49 = (ulonglong)(int)(uint)local_658;
            local_588 = (uint)local_658;
            pFVar57 = (FKey *)(local_660.Data + uVar49 * 0x18);
            FVar50.Data = local_660.Data;
            local_598 = pFVar57;
            while( true ) {
              local_518 = (FKey *)FVar50.Data;
              if ((uint)local_658 != (int)uVar49) {
                local_64d = 0;
                `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_64d);
              }
              pUVar36 = local_590;
              if ((FKey *)FVar50.Data == pFVar57) break;
              pFVar2 = &((FEnhancedActionKeyMapping *)FVar51.Data)->Key;
              pFVar2->KeyName = ((FKey *)FVar50.Data)->KeyName;
              pFVar13 = (((FKey *)FVar50.Data)->KeyDetails).Object;
              pTVar12 = (((FKey *)FVar50.Data)->KeyDetails).SharedReferenceCount.ReferenceController
              ;
              if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar12->SharedReferenceCount =
                     (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_418 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Key).KeyDetails.Object;
              pTStack_410 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Key).KeyDetails.
                            SharedReferenceCount.ReferenceController;
              (((FEnhancedActionKeyMapping *)FVar51.Data)->Key).KeyDetails.Object = pFVar13;
              (((FEnhancedActionKeyMapping *)FVar51.Data)->Key).KeyDetails.SharedReferenceCount.
              ReferenceController = pTVar12;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_410);
              pUVar14 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Action).field0_0x0.DebugPtr;
              if (pUVar14->bConsumesActionAndAxisMappings != false) {
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar14 != (UInputAction *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar14);
                }
                uVar60 = ((uint)((ulonglong)pUVar14 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pUVar14 >> 4)) * -0x7a143595;
                uVar60 = (uVar60 >> 0xd ^ uVar60) * -0x3d4d51cb;
                this_05 = TMapBase<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>_>
                          ::FindOrAddImpl<TObjectPtr<UInputAction_const_>_const_&>
                                    ((TMapBase<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>_>
                                      *)local_494._4_8_,uVar60 >> 0x10 ^ uVar60,
                                     &((FEnhancedActionKeyMapping *)FVar51.Data)->Action);
                TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                          (&this_05->KeysToConsume,pFVar2);
                this_05->EventsToCauseConsumption =
                     this_05->EventsToCauseConsumption |
                     (ETriggerEvent)
                     ((((FEnhancedActionKeyMapping *)FVar51.Data)->Action).field0_0x0.DebugPtr)->
                     TriggerEventsThatConsumeLegacyKeys;
              }
              if ((((FEnhancedActionKeyMapping *)FVar51.Data)->Action).field0_0x0.DebugPtr !=
                  (UInputAction *)0x0) {
                FVar15 = pFVar2->KeyName;
                uVar60 = ::GetTypeHash(FVar15.ComparisonIndex.Value);
                if (local_138._8_4_ != local_104) {
                  FVar47 = (ForElementType<FSetElementId>)local_100;
                  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
                    FVar47 = local_f8;
                  }
                  iVar28 = *(int *)((longlong)FVar47 +
                                   (ulonglong)(local_f0 - 1U & FVar15.Number + uVar60) * 4);
                  if (iVar28 != -1) {
                    do {
                      if (*(FName *)(local_138._0_8_ + (longlong)iVar28 * 0x20) == pFVar2->KeyName)
                      goto LAB_14a6ee3d9;
                      iVar28 = *(int *)(local_138._0_8_ + (longlong)iVar28 * 0x20 + 0x18);
                    } while (iVar28 != -1);
                  }
                }
                pUVar14 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Action).field0_0x0.DebugPtr;
                pFVar55 = (pUVar14->Triggers).AllocatorInstance.Data;
                iVar28 = (pUVar14->Triggers).ArrayNum;
                pFVar56 = pFVar55 + (longlong)iVar28 * 8;
                while( true ) {
                  if ((pUVar14->Triggers).ArrayNum != iVar28) {
                    local_64c = 0;
                    `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_64c);
                  }
                  if (pFVar55 == pFVar56) {
                    local_360 = &local_64b;
                    bVar25 = false;
                    local_368 = UE::Core::Private::Function::
                                TFunctionRefCaller<`IEnhancedInputSubsystemInterface::RebuildControlMappings'::__l108::<lambda_2>,bool,UInputTrigger_const_*>
                                ::Call;
                    bVar27 = HasTriggerWith(local_620,
                                            (TFunctionRef<bool___cdecl(UInputTrigger_const_*)> *)
                                            &local_368,
                                            (TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *)
                                            FVar51.Data);
                    if (bVar27) goto LAB_14a6edcc7;
                    bVar25 = false;
                    bVar27 = false;
                    if (((((FEnhancedActionKeyMapping *)FVar51.Data)->Action).field0_0x0.DebugPtr)->
                        bConsumeInput != false) {
                      if (((local_670.Data <= pFVar2) &&
                          (pFVar2 < local_670.Data + (longlong)local_668._4_4_ * 0x18)) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar25)) {
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      iVar28 = (int)local_668;
                      if ((int)local_668 == local_668._4_4_) {
                        iVar28 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x818,&local_670,(int *)((longlong)&local_668 + 4));
                      }
                      bVar25 = false;
                      local_668 = CONCAT44(local_668._4_4_,iVar28 + 1);
                      lVar45 = (longlong)iVar28;
                      *(FName *)&local_670.Data[lVar45 * 0x18].field_0x0 = pFVar2->KeyName;
                      *(FKeyDetails **)(local_670.Data + lVar45 * 0x18 + 8) =
                           (((FEnhancedActionKeyMapping *)FVar51.Data)->Key).KeyDetails.Object;
                      pTVar12 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Key).KeyDetails.
                                SharedReferenceCount.ReferenceController;
                      *(TReferenceControllerBase<1> **)(local_670.Data + lVar45 * 0x18 + 0x10) =
                           pTVar12;
                      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        pTVar12->SharedReferenceCount =
                             (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
                        UNLOCK();
                        bVar25 = false;
                      }
                    }
                    goto LAB_14a6edccc;
                  }
                  local_488.ReferenceController = *(TReferenceControllerBase<1> **)pFVar55;
                  bVar25 = UE::Core::Private::Function::
                           TFunctionRefCaller<`IEnhancedInputSubsystemInterface::RebuildControlMappings'::__l108::<lambda_2>,bool,UInputTrigger_const_*>
                           ::Call(&local_64b,(UInputTrigger **)&local_488);
                  if (bVar25) break;
                  pFVar55 = pFVar55 + 8;
                }
                bVar25 = true;
LAB_14a6edcc7:
                bVar27 = true;
LAB_14a6edccc:
                pTVar38 = local_480;
                uVar29 = TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::
                         AddUniqueImpl<FEnhancedActionKeyMapping_const_&>
                                   (local_480,(FEnhancedActionKeyMapping *)FVar51.Data);
                FVar15 = pFVar2->KeyName;
                uVar60 = ::GetTypeHash(FVar15.ComparisonIndex.Value);
                piVar39 = TMapBase<FKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,int,0>_>
                          ::FindOrAddImpl<FKey_const_&>
                                    ((TMapBase<FKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,int,0>_>
                                      *)local_478,FVar15.Number + uVar60,pFVar2);
                *piVar39 = *piVar39 + 1;
                pbVar7 = (byte *)((longlong)&local_5f8->_padding_ + 4);
                *pbVar7 = *pbVar7 & 0xfe;
                uVar60 = 0;
                if ((int)uVar29 < pTVar38->ArrayNum) {
                  uVar60 = ~uVar29 >> 0x1f;
                }
                local_628 = uVar29;
                if ((uVar60 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pFVar61 = (FEnhancedActionKeyMapping *)
                          ((pTVar38->AllocatorInstance).Data + (longlong)(int)uVar29 * 0x50);
                pFVar55 = (pFVar61->Modifiers).AllocatorInstance.Data;
                pTVar3 = &pFVar61->Modifiers;
                iVar28 = (pFVar61->Modifiers).ArrayNum;
                pFVar56 = pFVar55 + (longlong)iVar28 * 8;
                local_5a0 = pFVar61;
                while( true ) {
                  if ((pFVar61->Modifiers).ArrayNum != iVar28) {
                    local_64a = 0;
                    `TCheckedPointerIterator<TObjectPtr<UInputModifier>_const_,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(&local_64a);
                  }
                  if (pFVar55 == pFVar56) break;
                  pFVar55 = pFVar55 + 8;
                }
                uVar60 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Modifiers).ArrayNum;
                if ((int)uVar60 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar60);
                }
                piVar39 = &(pFVar61->Modifiers).ArrayMax;
                (pFVar61->Modifiers).ArrayNum = 0;
                if (*piVar39 != uVar60) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,uVar60,&pTVar3->AllocatorInstance,0,piVar39);
                }
                pFVar5 = local_5e0;
                pFVar55 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Modifiers).AllocatorInstance.
                          Data;
                iVar28 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Modifiers).ArrayNum;
                pFVar56 = pFVar55 + (longlong)iVar28 * 8;
                while( true ) {
                  if ((pFVar5->Modifiers).ArrayNum != iVar28) {
                    local_649 = 0;
                    `TCheckedPointerIterator<UInputModifier_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_649);
                  }
                  pFVar23 = local_5a0;
                  if (pFVar55 == pFVar56) break;
                  pUVar10 = *(UObject **)pFVar55;
                  if (pUVar10 != (UObject *)0x0) {
                    local_528.ComparisonIndex.Value = 0;
                    local_528.Number = 0;
                    pUVar33 = UInputModifier::StaticClass();
                    local_5f0 = DuplicateObject_Internal(pUVar33,pUVar10,(UObject *)0x0,local_528);
                    pFVar58 = (pTVar3->AllocatorInstance).Data;
                    if (((pFVar58 <= (FScriptContainerElement *)&local_5f0) &&
                        ((FScriptContainerElement *)&local_5f0 < pFVar58 + (longlong)*piVar39 * 8))
                       && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar26)) {
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                    iVar30 = (pFVar61->Modifiers).ArrayNum;
                    if (iVar30 == *piVar39) {
                      iVar30 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&pTVar3->AllocatorInstance,piVar39);
                    }
                    (pFVar61->Modifiers).ArrayNum = iVar30 + 1;
                    *(UObject **)((pTVar3->AllocatorInstance).Data + (longlong)iVar30 * 8) =
                         local_5f0;
                  }
                  pFVar55 = pFVar55 + 8;
                }
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  pFVar56 = (pTVar3->AllocatorInstance).Data;
                  iVar28 = 0;
                  if (0 < (pFVar61->Modifiers).ArrayNum) {
                    do {
                      if (*(UObject **)pFVar56 != (UObject *)0x0) {
                        UE::GC::MarkAsReachable(*(UObject **)pFVar56);
                      }
                      iVar28 = iVar28 + 1;
                      pFVar56 = pFVar56 + 8;
                    } while (iVar28 < (pFVar61->Modifiers).ArrayNum);
                  }
                }
                ApplyAxisPropertyModifiers(local_620,local_5f8,pFVar23);
                pFVar55 = (pFVar23->Triggers).AllocatorInstance.Data;
                iVar28 = (pFVar23->Triggers).ArrayNum;
                pFVar56 = pFVar55 + (longlong)iVar28 * 8;
                while( true ) {
                  if ((pFVar23->Triggers).ArrayNum != iVar28) {
                    local_648 = 0;
                    `TCheckedPointerIterator<TObjectPtr<UInputTrigger>_const_,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(&local_648);
                  }
                  FVar51.Data = (FScriptContainerElement *)local_5e0;
                  if (pFVar55 == pFVar56) break;
                  pFVar55 = pFVar55 + 8;
                }
                uVar60 = (local_5e0->Triggers).ArrayNum;
                if ((int)uVar60 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar60);
                }
                piVar39 = &(pFVar23->Triggers).ArrayMax;
                (pFVar23->Triggers).ArrayNum = 0;
                if (*piVar39 != uVar60) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,uVar60,(ForAnyElementType *)pFVar23,0,piVar39);
                }
                pFVar55 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Triggers).AllocatorInstance.
                          Data;
                iVar28 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Triggers).ArrayNum;
                pFVar56 = pFVar55 + (longlong)iVar28 * 8;
                while( true ) {
                  if ((((FEnhancedActionKeyMapping *)FVar51.Data)->Triggers).ArrayNum != iVar28) {
                    local_647 = 0;
                    `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_647);
                  }
                  if (pFVar55 == pFVar56) break;
                  pUVar10 = *(UObject **)pFVar55;
                  if (pUVar10 != (UObject *)0x0) {
                    local_520.ComparisonIndex.Value = 0;
                    local_520.Number = 0;
                    pUVar33 = UInputTrigger::StaticClass();
                    local_5e8 = DuplicateObject_Internal(pUVar33,pUVar10,(UObject *)0x0,local_520);
                    pFVar58 = (pFVar23->Triggers).AllocatorInstance.Data;
                    if (((pFVar58 <= (FScriptContainerElement *)&local_5e8) &&
                        ((FScriptContainerElement *)&local_5e8 < pFVar58 + (longlong)*piVar39 * 8))
                       && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar26)) {
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                    iVar30 = (pFVar23->Triggers).ArrayNum;
                    if (iVar30 == *piVar39) {
                      iVar30 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,(ForAnyElementType *)pFVar23,piVar39);
                    }
                    (pFVar23->Triggers).ArrayNum = iVar30 + 1;
                    *(UObject **)((pFVar23->Triggers).AllocatorInstance.Data + (longlong)iVar30 * 8)
                         = local_5e8;
                  }
                  pFVar55 = pFVar55 + 8;
                }
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  pFVar56 = (pFVar23->Triggers).AllocatorInstance.Data;
                  iVar28 = 0;
                  if (0 < (pFVar23->Triggers).ArrayNum) {
                    do {
                      if (*(UObject **)pFVar56 != (UObject *)0x0) {
                        UE::GC::MarkAsReachable(*(UObject **)pFVar56);
                      }
                      iVar28 = iVar28 + 1;
                      pFVar56 = pFVar56 + 8;
                    } while (iVar28 < (pFVar23->Triggers).ArrayNum);
                  }
                }
                pFVar57 = local_598;
                if (bVar27) {
                  if (((local_618.AllocatorInstance.Data <= (FScriptContainerElement *)&local_628)
                      && ((FScriptContainerElement *)&local_628 <
                          local_618.AllocatorInstance.Data + (longlong)local_618.ArrayMax * 4)) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar27)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  iVar28 = local_618.ArrayNum;
                  if (local_618.ArrayNum == local_618.ArrayMax) {
                    iVar28 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_618.AllocatorInstance,&local_618.ArrayMax);
                  }
                  local_618.ArrayNum = iVar28 + 1;
                  *(uint *)(local_618.AllocatorInstance.Data + (longlong)iVar28 * 4) = local_628;
                  pFVar57 = local_598;
                  if (bVar25) {
                    pUVar14 = (((FEnhancedActionKeyMapping *)FVar51.Data)->Action).field0_0x0.
                              DebugPtr;
                    pFVar55 = (pUVar14->Triggers).AllocatorInstance.Data;
                    iVar28 = (pUVar14->Triggers).ArrayNum;
                    pFVar56 = pFVar55 + (longlong)iVar28 * 8;
                    while( true ) {
                      if ((pUVar14->Triggers).ArrayNum != iVar28) {
                        local_646 = 0;
                        `TCheckedPointerIterator<TObjectPtr<UInputTrigger>_const_,int,0>::
                        operator!='::__l2::<lambda_1>::operator()(&local_646);
                      }
                      pFVar57 = local_598;
                      FVar51.Data = (FScriptContainerElement *)local_5e0;
                      if (pFVar55 == pFVar56) break;
                      pUVar10 = *(UObject **)pFVar55;
                      if (pUVar10 != (UObject *)0x0) {
                        pUVar33 = UInputTriggerChordAction::StaticClass();
                        iVar30 = (int)pUVar33->_padding_;
                        if ((iVar30 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) +
                             (longlong)iVar30 * 8) == &pUVar33->_padding_)) {
                          local_560.ComparisonIndex.Value = 0;
                          local_560.Number = 0;
                          pUVar33 = UInputTrigger::StaticClass();
                          local_600 = DuplicateObject_Internal
                                                (pUVar33,pUVar10,(UObject *)0x0,local_560);
                          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                             (local_600 != (UObject *)0x0)) {
                            UE::GC::MarkAsReachable(local_600);
                          }
                          pFVar58 = (pFVar23->Triggers).AllocatorInstance.Data;
                          if (((pFVar58 <= (FScriptContainerElement *)&local_600) &&
                              ((FScriptContainerElement *)&local_600 <
                               pFVar58 + (longlong)*piVar39 * 8)) &&
                             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar25)) {
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          iVar30 = (pFVar23->Triggers).ArrayNum;
                          if (iVar30 == *piVar39) {
                            iVar30 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x808,(ForAnyElementType *)pFVar23,piVar39);
                          }
                          (pFVar23->Triggers).ArrayNum = iVar30 + 1;
                          *(UObject **)
                           ((pFVar23->Triggers).AllocatorInstance.Data + (longlong)iVar30 * 8) =
                               local_600;
                          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                             (local_600 != (UObject *)0x0)) {
                            UE::GC::MarkAsReachable(local_600);
                          }
                        }
                      }
                      pFVar55 = pFVar55 + 8;
                    }
                  }
                }
              }
LAB_14a6ee3d9:
              uVar49 = (ulonglong)local_588;
              FVar50.Data = (FScriptContainerElement *)(local_518 + 1);
            }
LAB_14a6ee3f0:
            uVar44 = (ulonglong)(uint)local_580.ArrayNum;
            FVar51.Data = FVar51.Data + 0x50;
            uVar49 = (ulonglong)local_624;
          }
        }
        uVar60 = (int)local_668 + (local_138._8_4_ - local_104);
        if ((uint)(local_138._8_4_ - local_104) < uVar60) {
          if ((int)uVar60 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar60);
          }
          TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_138,uVar60);
          if (uVar60 < 4) {
            iVar28 = 1;
          }
          else {
            uVar49 = (ulonglong)((uVar60 >> 1) + 7) * 2 + 1;
            lVar45 = 0x3f;
            if (uVar49 != 0) {
              for (; uVar49 >> lVar45 == 0; lVar45 = lVar45 + -1) {
              }
            }
            local_4a0._4_4_ = (undefined4)lVar45;
            iVar28 = 1 << ((byte)lVar45 & 0x1f);
          }
          if ((local_f0 == 0) || (local_f0 < iVar28)) {
            local_f0 = iVar28;
            TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::Rehash
                      ((TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)local_138);
          }
        }
        iVar28 = (int)local_668;
        pFVar57 = (FKey *)(local_670.Data + (longlong)(int)local_668 * 0x18);
        FVar51.Data = local_670.Data;
        while( true ) {
          if ((int)local_668 != iVar28) {
            local_645 = 0;
            `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_645);
          }
          if ((FKey *)FVar51.Data == pFVar57) break;
          TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::Emplace<FKey>
                    ((TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)local_138,
                     (FKey *)(local_4a0 + 8),(bool *)FVar51.Data);
          FVar51.Data = FVar51.Data + 0x18;
        }
        if ((longlong)local_668 < 0) {
          DestructItems<FKey,int>((FKey *)local_670.Data,(int)local_668);
          uVar49 = local_668 >> 0x20;
          local_668 = local_668 & 0xffffffff00000000;
          if ((int)uVar49 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&local_670,0,(int *)((longlong)&local_668 + 4));
          }
        }
        else {
          DestructItems<FKey,int>((FKey *)local_670.Data,(int)local_668);
          local_668 = local_668 & 0xffffffff00000000;
        }
        DestructItems<FEnhancedActionKeyMapping,int>
                  ((FEnhancedActionKeyMapping *)local_580.AllocatorInstance.Data,local_580.ArrayNum)
        ;
        if ((FEnhancedActionKeyMapping *)local_580.AllocatorInstance.Data !=
            (FEnhancedActionKeyMapping *)0x0) {
          FMemory::Free(local_580.AllocatorInstance.Data);
        }
        DestructItems<FKey,int>((FKey *)local_670.Data,(int)local_668);
        this = local_620;
        pTVar62 = local_570;
        uVar60 = local_640;
        if ((FKey *)local_670.Data != (FKey *)0x0) {
          FMemory::Free(local_670.Data);
          this = local_620;
          pTVar62 = local_570;
          uVar60 = local_640;
        }
      }
      TStack_3b0.UnvisitedBitMask = TStack_3b0.UnvisitedBitMask & ~TStack_3b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b0);
      pUVar36 = local_590;
      pFVar53 = local_568;
    }
    InjectChordBlockers(this,&local_618);
    pUVar31 = local_5f8;
    UPlayerInput::ForceRebuildingKeyMaps((UPlayerInput *)local_5f8,false);
    this_00 = &pUVar31->ActionInstanceData;
    if (this->MappingRebuildPending == RebuildWithFlush) {
      if (*(int *)&(pUVar31->ActionInstanceData).field_0x48 < 2) {
        TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
                          *)this_00);
        TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,0);
      }
      else {
        TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,0);
        *(undefined4 *)&(pUVar31->ActionInstanceData).field_0x48 = 1;
        TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
    else {
      local_15c = 0x80;
      puVar4 = &(pUVar31->ActionInstanceData).field_0x10;
      local_188._0_8_ = (FScriptContainerElement *)0x0;
      local_188._8_8_ = 0;
      local_168 = (ForElementType<unsigned_int>)0x0;
      local_160 = 0;
      local_154 = 0;
      local_148 = (ForElementType<FSetElementId>)0x0;
      local_140 = 0;
      local_158 = -1;
      local_4e0._padding_._0_4_ = 0;
      local_4e0._padding_._4_4_ = 1;
      local_4e0.UnvisitedBitMask = 0xffffffff;
      local_4e0.CurrentBitIndex = 0;
      local_4e0.BaseBitIndex = 0;
      local_4e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
      if (*(int *)&(pUVar31->ActionInstanceData).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4e0);
      }
      TStack_5d0._padding_ = CONCAT44(local_4e0._padding_._4_4_,(undefined4)local_4e0._padding_);
      TStack_5d0._16_8_ = CONCAT44(local_4e0.CurrentBitIndex,local_4e0.UnvisitedBitMask);
      TStack_5d0._24_8_ = CONCAT44(local_4e0._28_4_,local_4e0.BaseBitIndex);
      local_530 = *(int *)&(pUVar31->ActionInstanceData).field_0x8 -
                  *(int *)&(pUVar31->ActionInstanceData).field_0x34;
      pTStack_548 = local_4e0.Array;
      uStack_5ac = uStack_52c;
      local_5b0 = local_530;
      TStack_5d0.Array = local_4e0.Array;
      local_5d8 = this_00;
      local_558 = this_00;
      lStack_550 = TStack_5d0._padding_;
      uStack_540 = TStack_5d0._16_8_;
      lStack_538 = TStack_5d0._24_8_;
      pTVar34 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_1a8,(TBitArray<FDefaultBitArrayAllocator> *)puVar4,
                           *(int *)&(pUVar31->ActionInstanceData).field_0x28);
      lStack_550 = pTVar34->_padding_;
      pTVar18 = pTVar34->Array;
      uVar17._0_4_ = pTVar34->UnvisitedBitMask;
      uVar17._4_4_ = pTVar34->CurrentBitIndex;
      lStack_538 = *(longlong *)&pTVar34->BaseBitIndex;
      pTStack_548 = pTVar18;
      uStack_540 = uVar17;
      while( true ) {
        pTVar22 = local_5d8;
        if (*(int *)(&local_5d8->field_0x0 + 8) - *(int *)(&local_5d8->field_0x0 + 0x34) !=
            local_5b0) {
          local_644 = 0;
          `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_644);
        }
        if (((TStack_5d0.CurrentBitIndex == uVar17._4_4_) && (TStack_5d0.Array == pTVar18)) &&
           (pTVar22 == this_00)) break;
        local_460 = *(undefined8 *)
                     ((longlong)TStack_5d0.CurrentBitIndex * 0x70 + *(longlong *)&pTVar22->field_0x0
                     );
        TSet<UInputAction_const_*,DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator>::
        Emplace<UInputAction_const_*>
                  ((TSet<UInputAction_const_*,DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator>
                    *)local_188,(UInputAction **)local_494,(bool *)&local_460);
        TStack_5d0.UnvisitedBitMask = TStack_5d0.UnvisitedBitMask & ~TStack_5d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5d0);
      }
      local_624 = (pUVar31->EnhancedActionMappings).ArrayNum;
      uVar49 = (ulonglong)(int)local_624;
      pFVar55 = (pUVar31->EnhancedActionMappings).AllocatorInstance.Data;
      pFVar56 = pFVar55 + 0x18;
      local_5a0 = (FEnhancedActionKeyMapping *)(pFVar55 + uVar49 * 0x50);
      while( true ) {
        pFVar61 = local_5a0;
        if ((pUVar31->EnhancedActionMappings).ArrayNum != (int)uVar49) {
          local_643[0] = 0;
          `TCheckedPointerIterator<FEnhancedActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_643);
        }
        pFVar5 = (FEnhancedActionKeyMapping *)(pFVar56 + -0x18);
        if (pFVar5 == pFVar61) break;
        uVar49 = *(ulonglong *)(pFVar56 + 8);
        if (local_188._8_4_ != local_154) {
          uVar60 = ((uint)(uVar49 >> 0x14) & 0xffff ^ (uint)(uVar49 >> 4)) * -0x7a143595;
          uVar60 = (uVar60 >> 0xd ^ uVar60) * -0x3d4d51cb;
          FVar47 = (ForElementType<FSetElementId>)local_150;
          if (local_148 != (ForElementType<FSetElementId>)0x0) {
            FVar47 = local_148;
          }
          uVar60 = *(uint *)((longlong)FVar47 +
                            (longlong)(int)(local_140 - 1U & (uVar60 >> 0x10 ^ uVar60)) * 4);
          if (uVar60 != 0xffffffff) {
LAB_14a6ee840:
            lVar45 = (longlong)(int)uVar60;
            if (*(ulonglong *)(local_188._0_8_ + lVar45 * 0x10) != uVar49)
            goto code_r0x00014a6ee853;
            if (((int)uVar60 < 0) || (local_160 <= (int)uVar60)) {
LAB_14a6ee89d:
              bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Elements.IsValidIndex(ElementIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                  ,0x2ab,
                                  L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
              if (bVar25) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            else {
              FVar46 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
              if (local_168 != (ForElementType<unsigned_int>)0x0) {
                FVar46 = local_168;
              }
              uVar29 = uVar60;
              if ((int)uVar60 < 0) {
                uVar29 = uVar60 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar46 + (longlong)((int)uVar29 >> 5) * 4) >> (uVar60 & 0x1f)
                  & 1) == 0) goto LAB_14a6ee89d;
            }
            uVar17 = local_188._0_8_;
            FVar47 = (ForElementType<FSetElementId>)local_150;
            if (local_148 != (ForElementType<FSetElementId>)0x0) {
              FVar47 = local_148;
            }
            pFVar55 = (FScriptContainerElement *)
                      ((longlong)FVar47 +
                      (longlong)*(int *)(local_188._0_8_ + lVar45 * 0x10 + 0xc) * 4);
            while( true ) {
              uVar29 = *(uint *)pFVar55;
              if ((uVar29 == 0xffffffff) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("NextElementIndex != INDEX_NONE",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                      ,0x2b5,L"Corrupt hash"), bVar25)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              if (uVar29 == uVar60) break;
              pFVar55 = (FScriptContainerElement *)
                        (local_188._0_8_ + (longlong)(int)uVar29 * 0x10 + 8);
            }
            *(uint *)pFVar55 = *(uint *)(uVar17 + lVar45 * 0x10 + 8);
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_188,uVar60,1);
            pUVar31 = local_5f8;
          }
        }
LAB_14a6ee965:
        if ((local_620->bIgnoreAllPressedKeysUntilReleaseOnRebuild != false) &&
           (*(char *)(*(longlong *)(pFVar56 + 8) + 0x48) == '\0')) {
          local_358.KeyName = *(FName *)(pFVar56 + 0x10);
          pTVar12 = *(TReferenceControllerBase<1> **)(pFVar56 + 0x20);
          local_358.KeyDetails.Object = *(FKeyDetails **)(pFVar56 + 0x18);
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_358.KeyDetails.SharedReferenceCount.ReferenceController = pTVar12;
          pFVar40 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                    ::Find((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                            *)&pUVar31->_padding_,&local_358);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
          if ((pFVar40 != (FKeyState *)0x0) && (pFVar40->bDown != 0)) {
            pFVar56[0x28] = (FScriptContainerElement)((byte)pFVar56[0x28] | 1);
          }
        }
        FVar51.Data = local_638.Data;
        pFVar61 = (FEnhancedActionKeyMapping *)(local_638.Data + (longlong)local_630 * 0x50);
        FVar50.Data = local_638.Data;
        if ((FEnhancedActionKeyMapping *)local_638.Data == pFVar61) {
LAB_14a6eeda7:
          pFVar56 = pFVar56 + 0x50;
          uVar49 = (ulonglong)local_624;
          pUVar31 = local_5f8;
        }
        else {
          do {
            bVar25 = FEnhancedActionKeyMapping::Equals<1>
                               (pFVar5,(FEnhancedActionKeyMapping *)FVar50.Data);
            if (bVar25) {
              uVar60 = (uint)(((longlong)FVar50.Data - (longlong)FVar51.Data) / 0x50);
              if (uVar60 != 0xffffffff) {
                if (bRespectIMCPriorityForTriggers != false) {
                  uVar29 = 0;
                  if ((int)uVar60 < local_630) {
                    uVar29 = ~uVar60 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pFVar61 = (FEnhancedActionKeyMapping *)
                            (local_638.Data + (longlong)(int)uVar60 * 0x50);
                  if (pFVar61 != pFVar5) {
                    pFVar55 = (pFVar61->Triggers).AllocatorInstance.Data;
                    if (pFVar55 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar55);
                    }
                    (pFVar61->Triggers).AllocatorInstance.Data =
                         (pFVar5->Triggers).AllocatorInstance.Data;
                    (pFVar5->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    (pFVar61->Triggers).ArrayNum = *(int *)(pFVar56 + -0x10);
                    (pFVar61->Triggers).ArrayMax = *(int *)(pFVar56 + -0xc);
                    *(undefined8 *)(pFVar56 + -0x10) = 0;
                  }
                  uVar29 = 0;
                  if ((int)uVar60 < local_630) {
                    uVar29 = ~uVar60 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pFVar55 = pFVar56 + -8;
                  pFVar58 = local_638.Data + (longlong)(int)uVar60 * 0x50 + 0x10;
                  if (pFVar58 != pFVar55) {
                    if (*(void **)pFVar58 != (void *)0x0) {
                      FMemory::Free(*(void **)pFVar58);
                    }
                    *(undefined8 *)pFVar58 = *(undefined8 *)pFVar55;
                    *(undefined8 *)pFVar55 = 0;
                    *(int *)(pFVar58 + 8) = *(int *)pFVar56;
                    *(int *)(pFVar58 + 0xc) = *(int *)(pFVar56 + 4);
                    *(undefined8 *)pFVar56 = 0;
                  }
                }
                uVar29 = 0;
                if ((int)uVar60 < local_630) {
                  uVar29 = ~uVar60 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                local_5a8 = (FEnhancedActionKeyMapping *)(longlong)(int)uVar60;
                lVar45 = (longlong)local_5a8 * 0x50;
                pFVar61 = (FEnhancedActionKeyMapping *)(local_638.Data + lVar45);
                if (pFVar5 != pFVar61) {
                  pFVar55 = (pFVar5->Triggers).AllocatorInstance.Data;
                  if (pFVar55 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar55);
                  }
                  (pFVar5->Triggers).AllocatorInstance.Data =
                       (pFVar61->Triggers).AllocatorInstance.Data;
                  (pFVar61->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  *(int *)(pFVar56 + -0x10) = (pFVar61->Triggers).ArrayNum;
                  *(int *)(pFVar56 + -0xc) = (pFVar61->Triggers).ArrayMax;
                  (pFVar61->Triggers).ArrayNum = 0;
                  (pFVar61->Triggers).ArrayMax = 0;
                }
                pTVar3 = &pFVar61->Modifiers;
                pFVar55 = pFVar56 + -8;
                if ((TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *)pFVar55 !=
                    pTVar3) {
                  if (*(void **)pFVar55 != (void *)0x0) {
                    FMemory::Free(*(void **)pFVar55);
                  }
                  *(FScriptContainerElement **)pFVar55 = (pTVar3->AllocatorInstance).Data;
                  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  *(int *)pFVar56 = (pFVar61->Modifiers).ArrayNum;
                  *(int *)(pFVar56 + 4) = (pFVar61->Modifiers).ArrayMax;
                  (pFVar61->Modifiers).ArrayNum = 0;
                  (pFVar61->Modifiers).ArrayMax = 0;
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar14 = (pFVar61->Action).field0_0x0.DebugPtr, pUVar14 != (UInputAction *)0x0)
                   ) {
                  UE::GC::MarkAsReachable((UObject *)pUVar14);
                }
                pTVar6 = &(pFVar61->Key).KeyDetails;
                *(TObjectPtr<UInputAction_const_>_u_0 *)(pFVar56 + 8) = (pFVar61->Action).field0_0x0
                ;
                *(FName *)(pFVar56 + 0x10) = (pFVar61->Key).KeyName;
                if ((TSharedPtr<FKeyDetails,1> *)(pFVar56 + 0x18) != pTVar6) {
                  *(FKeyDetails **)(pFVar56 + 0x18) = pTVar6->Object;
                  pTVar6->Object = (FKeyDetails *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            ((FSharedReferencer<1> *)(pFVar56 + 0x20),
                             &(pFVar61->Key).KeyDetails.SharedReferenceCount);
                }
                FVar43 = (FScriptContainerElement)
                         (((byte)pFVar56[0x28] ^ pFVar61->bShouldBeIgnored) & 1 ^
                         (byte)pFVar56[0x28]);
                pFVar56[0x28] = FVar43;
                pFVar56[0x28] =
                     (FScriptContainerElement)
                     (((byte)FVar43 ^ pFVar61->field_0x40) & 2 ^ (byte)FVar43);
                pFVar56[0x29] = (FScriptContainerElement)pFVar61->SettingBehavior;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar54 = (pFVar61->PlayerMappableKeySettings).field0_0x0.DebugPtr,
                   pUVar54 != (UPlayerMappableKeySettings *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar54);
                }
                *(TObjectPtr<UPlayerMappableKeySettings>_u_0 *)(pFVar56 + 0x30) =
                     (pFVar61->PlayerMappableKeySettings).field0_0x0;
                uVar29 = 0;
                if ((int)uVar60 < local_630) {
                  uVar29 = ~uVar60 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                FVar51.Data = local_638.Data;
                pFVar55 = local_638.Data + lVar45;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (*(TReferenceControllerBase<1> **)(local_638.Data + lVar45 + 0x38));
                if (*(void **)(pFVar55 + 0x10) != (void *)0x0) {
                  FMemory::Free(*(void **)(pFVar55 + 0x10));
                }
                if (*(void **)&pFVar55->field_0x0 != (void *)0x0) {
                  FMemory::Free(*(void **)&pFVar55->field_0x0);
                }
                iVar28 = (local_630 - uVar60) + -1;
                if (1 < iVar28) {
                  iVar28 = 1;
                }
                if (iVar28 != 0) {
                  memmove(pFVar55,FVar51.Data + (longlong)(local_630 - iVar28) * 0x50,
                          (longlong)iVar28 * 0x50);
                }
                local_630 = local_630 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x50,8,&local_638,local_630,&local_62c);
              }
              goto LAB_14a6eeda7;
            }
            FVar50.Data = FVar50.Data + 0x50;
          } while ((FEnhancedActionKeyMapping *)FVar50.Data != pFVar61);
          pFVar56 = pFVar56 + 0x50;
          uVar49 = (ulonglong)local_624;
          pUVar31 = local_5f8;
        }
      }
      UEnhancedPlayerInput::NotifyInputActionsUnmapped
                (pUVar31,(TSet<UInputAction_const_*,DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator>
                          *)local_188);
      local_140 = 0;
      if (local_148 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_148);
      }
      TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_188);
      this = local_620;
    }
    pFVar55 = (pUVar31->EnhancedActionMappings).AllocatorInstance.Data;
    iVar28 = (pUVar31->EnhancedActionMappings).ArrayNum;
    pFVar56 = pFVar55 + 0x20;
    while( true ) {
      if ((pUVar31->EnhancedActionMappings).ArrayNum != iVar28) {
        `TCheckedPointerIterator<FEnhancedActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_608);
      }
      if (pFVar56 + -0x20 == pFVar55 + (longlong)iVar28 * 0x50) break;
      pUVar10 = *(UObject **)pFVar56;
      if (pUVar10 != (UObject *)0x0) {
        local_458 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        pFVar41 = UEnhancedPlayerInput::FindOrAddActionEventData
                            (pUVar31,(TObjectPtr<UInputAction_const_>)&local_458);
        local_238._s_0.X = (pFVar41->Value).Value.field0_0x0._s_0.X;
        local_238._s_0.Y = (pFVar41->Value).Value.field0_0x0._s_0.Y;
        local_238._s_0.Z = (pFVar41->Value).Value.field0_0x0._s_0.Z;
        uStack_220 = *(undefined8 *)&(pFVar41->Value).ValueType;
        pFVar42 = UEnhancedPlayerInput::ApplyModifiers
                            (pUVar31,&local_1c8,
                             (TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *)
                             (pFVar56 + -0x10),(FInputActionValue *)&local_238._s_0,0.0);
        dVar19 = (pFVar42->Value).field0_0x0._s_0.Y;
        (pFVar41->Value).Value.field0_0x0._s_0.X = (pFVar42->Value).field0_0x0._s_0.X;
        (pFVar41->Value).Value.field0_0x0._s_0.Y = dVar19;
        EVar20 = pFVar42->ValueType;
        uVar21 = *(undefined7 *)&pFVar42->field_0x19;
        (pFVar41->Value).Value.field0_0x0._s_0.Z = (pFVar42->Value).field0_0x0._s_0.Z;
        (pFVar41->Value).ValueType = EVar20;
        *(undefined7 *)&(pFVar41->Value).field_0x19 = uVar21;
      }
      pFVar56 = pFVar56 + 0x50;
    }
    this->MappingRebuildPending = None;
    this->bIgnoreAllPressedKeysUntilReleaseOnRebuild = true;
    this->bControlMappingsRebuiltThisTick = true;
    DestructItems<FKey,int>((FKey *)local_660.Data,(uint)local_658);
    if ((FKey *)local_660.Data != (FKey *)0x0) {
      FMemory::Free(local_660.Data);
    }
    if (local_618.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.AllocatorInstance.Data);
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_138);
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    DestructItems<FEnhancedActionKeyMapping,int>
              ((FEnhancedActionKeyMapping *)local_638.Data,local_630);
    if ((FEnhancedActionKeyMapping *)local_638.Data != (FEnhancedActionKeyMapping *)0x0) {
      FMemory::Free(local_638.Data);
    }
  }
  return;
code_r0x00014a6ee853:
  uVar60 = *(uint *)(local_188._0_8_ + lVar45 * 0x10 + 8);
  if (uVar60 == 0xffffffff) goto LAB_14a6ee965;
  goto LAB_14a6ee840;
}

// RemoveForcedInput @ 14a6f2e70

void __thiscall
IEnhancedInputSubsystemInterface::RemoveForcedInput
          (IEnhancedInputSubsystemInterface *this,UInputAction *param_1)

{
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  if (*(int *)&(this->ForcedActions).field_0x8 != *(int *)&(this->ForcedActions).field_0x34) {
    TSet<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>,FDefaultSetAllocator>
    ::RemoveImpl<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>_>
              ((TSet<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>,FDefaultSetAllocator>
                *)&this->ForcedActions,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
               (TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr> *)&local_res10);
  }
  return;
}

// RemoveForcedInput @ 14a6f2f10

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
IEnhancedInputSubsystemInterface::RemoveForcedInput
          (IEnhancedInputSubsystemInterface *this,FKey *param_1)

{
  float fVar1;
  int iVar2;
  FPlatformUserId FVar3;
  FName FVar4;
  FKeyDetails *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  UEnhancedPlayerInput *this_00;
  ULocalPlayer *pUVar10;
  longlong lVar11;
  UClass *pUVar12;
  undefined1 *puVar13;
  longlong lVar14;
  APlayerController *pAVar15;
  uint uVar16;
  FKey local_98;
  FKey local_80;
  TVector<double>_u_0 local_68;
  undefined1 local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined8 local_20;
  
  bVar8 = FKey::IsValid(param_1);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Key.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystemInterface.cpp"
                         ,0x4f0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar4 = param_1->KeyName;
  uVar9 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  if (*(int *)&(this->ForcedKeys).field_0x8 != *(int *)&(this->ForcedKeys).field_0x34) {
    puVar13 = *(undefined1 **)&(this->ForcedKeys).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->ForcedKeys).field_0x38;
    }
    iVar2 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->ForcedKeys).field_0x48 - 1U & FVar4.Number + uVar9)
                    * 4);
    if (iVar2 != -1) {
      lVar14 = *(longlong *)&(this->ForcedKeys).field_0x0;
      do {
        if (*(FName *)((longlong)iVar2 * 0x60 + lVar14) == param_1->KeyName) {
          if (((iVar2 != -1) && (lVar14 = (longlong)iVar2 * 0x60 + lVar14, lVar14 != 0)) &&
             (lVar14 != -0x18)) {
            this_00 = (UEnhancedPlayerInput *)(**(code **)(this->_padding_ + 0x10))(this);
            if (this_00 != (UEnhancedPlayerInput *)0x0) {
              pUVar10 = UPlayerInput::GetOwningLocalPlayer((UPlayerInput *)this_00);
              FVar3.InternalId = (pUVar10->PlatformUserId).InternalId;
              lVar11 = (**(code **)(this_00->_padding_ + 0x180))(this_00);
              fVar1 = *(float *)(lVar11 + 0x91c);
              bVar8 = FKey::IsAnalog(param_1);
              local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_68._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              local_68._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              local_68._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              local_68._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              if (bVar8) {
                local_48 = *(uint *)(lVar14 + 0x38);
                uStack_44 = *(uint *)(lVar14 + 0x3c);
                uStack_40 = *(uint *)(lVar14 + 0x40);
                uStack_3c = *(uint *)(lVar14 + 0x44);
                local_38 = *(undefined8 *)(lVar14 + 0x48);
                uVar9 = (uint)__xmm_80000000000000008000000000000000;
                local_30 = local_48 ^ uVar9;
                uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
                uStack_2c = uStack_44 ^ uVar16;
                uStack_28 = uStack_40 ^ uVar9;
                uStack_24 = uStack_3c ^ uVar16;
                uVar9 = (uint)local_38 ^ uVar9;
                uVar16 = (uint)((ulonglong)local_38 >> 0x20) ^ uVar16;
                local_20 = CONCAT44(uVar16,uVar9);
                local_68._s_0.Z = (double)CONCAT44(uVar16,uVar9);
                local_68._0_4_ = local_30;
                local_68._4_4_ = uStack_2c;
                local_68._8_4_ = uStack_28;
                local_68._12_4_ = uStack_24;
              }
              pAVar15 = (APlayerController *)this_00->_padding_;
              local_50 = 3;
              if (pAVar15 == (APlayerController *)0x0) {
LAB_14a6f30f1:
                pAVar15 = (APlayerController *)0x0;
              }
              else {
                pUVar12 = Z_Construct_UClass_APlayerController_NoRegister();
                iVar2 = (int)pUVar12->_padding_;
                if ((*(int *)(pAVar15->_padding_ + 0x38) < iVar2) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pAVar15->_padding_ + 0x30) + (longlong)iVar2 * 8)
                    != &pUVar12->_padding_)) goto LAB_14a6f30f1;
              }
              FVar4 = param_1->KeyName;
              pFVar5 = (param_1->KeyDetails).Object;
              pTVar6 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
              if (pAVar15 == (APlayerController *)0x0) {
                if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar6->SharedReferenceCount =
                       (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_80.KeyName = FVar4;
                local_80.KeyDetails.Object = pFVar5;
                local_80.KeyDetails.SharedReferenceCount.ReferenceController = pTVar6;
                InjectKey<UEnhancedPlayerInput>
                          (this_00,&local_80,(FInputActionValue *)&local_68._s_0,fVar1,FVar3,
                           IE_Released);
              }
              else {
                if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar6->SharedReferenceCount =
                       (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_98.KeyName = FVar4;
                local_98.KeyDetails.Object = pFVar5;
                local_98.KeyDetails.SharedReferenceCount.ReferenceController = pTVar6;
                InjectKey<APlayerController>
                          (pAVar15,&local_98,(FInputActionValue *)&local_68._s_0,fVar1,FVar3,
                           IE_Released);
              }
              (**(code **)(this_00->_padding_ + 0x2b0))(this_00);
            }
            if (*(int *)&(this->ForcedKeys).field_0x8 != *(int *)&(this->ForcedKeys).field_0x34) {
              FVar4 = param_1->KeyName;
              uVar9 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
              TSet<TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData>,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>,FDefaultSetAllocator>
              ::RemoveImpl<FKey>((TSet<TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData>,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>,FDefaultSetAllocator>
                                  *)&this->ForcedKeys,FVar4.Number + uVar9,param_1);
            }
          }
          break;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x58 + lVar14);
      } while (iVar2 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// RemoveMappingContext @ 14a6f31f0

void __thiscall
IEnhancedInputSubsystemInterface::RemoveMappingContext
          (IEnhancedInputSubsystemInterface *this,UInputMappingContext *param_1,
          FModifyContextOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FAppliedInputContextData *pFVar4;
  longlong *plVar5;
  int iVar6;
  TObjectPtr<UInputMappingContext_const_>_u_0 TVar7;
  UInputMappingContext *local_res10;
  UInputMappingContext *local_res20;
  UInputMappingContext *local_28;
  UInputMappingContext **local_20;
  UInputMappingContext *local_18 [2];
  
  if (param_1 == (UInputMappingContext *)0x0) {
    return;
  }
  local_res10 = param_1;
  lVar3 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar3 == 0) {
    return;
  }
  if (local_res10->RegistrationTrackingMode == Untracked) {
    local_res20 = local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    TVar7.DebugPtr = (UInputMappingContext *)&local_res20;
  }
  else {
    if (local_res10->RegistrationTrackingMode != CountRegistrations) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystemInterface.cpp"
                         ,0x142,L"");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28 = local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    pFVar4 = TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
             ::Find((TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                     *)(lVar3 + 0x588),(TObjectPtr<UInputMappingContext_const_>)&local_28);
    if (pFVar4 == (FAppliedInputContextData *)0x0) {
      return;
    }
    iVar6 = pFVar4->RegistrationCount + -1;
    pFVar4->RegistrationCount = iVar6;
    if (iVar6 < 0) {
      local_20 = &local_res10;
      `IEnhancedInputSubsystemInterface::RemoveMappingContext'::__l18::<lambda_1>::operator()
                (&local_20);
    }
    else if (0 < iVar6) {
      return;
    }
    local_18[0] = local_res10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10 != (UInputMappingContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    TVar7.DebugPtr = (UInputMappingContext *)local_18;
  }
  TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
  ::Remove((TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
            *)(lVar3 + 0x588),(TObjectPtr<UInputMappingContext_const_>)TVar7);
  (**(code **)(this->_padding_ + 0xd8))(this,param_2,1);
  if ((param_2->bNotifyUserSettings != '\0') &&
     (plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x18))(this), plVar5 != (longlong *)0x0))
  {
    (**(code **)(*plVar5 + 0x370))(plVar5,local_res10);
    return;
  }
  return;
}

// RemoveTagFromInputMode @ 14a6f33b0

void __thiscall
IEnhancedInputSubsystemInterface::RemoveTagFromInputMode
          (IEnhancedInputSubsystemInterface *this,FGameplayTag *param_1,
          FModifyContextOptions *param_2)

{
  code *pcVar1;
  FGameplayTagContainer local_28;
  
  pcVar1 = *(code **)(this->_padding_ + 200);
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_28,param_1);
  (*pcVar1)(this,&local_28,param_2);
  if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
  }
  if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// RemoveTagsFromInputMode @ 14a6f3430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::RemoveTagsFromInputMode
          (IEnhancedInputSubsystemInterface *this,FGameplayTagContainer *param_1,
          FModifyContextOptions *param_2)

{
  UClass *this_00;
  longlong lVar1;
  FString local_18;
  
  if (2 < (byte)LogEnhancedInput._0_1_) {
    this_00 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    if ((*(byte *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 0x10) == 0) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  lVar1 = (**(code **)(this->_padding_ + 0x10))(this);
  if (lVar1 == 0) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      FGameplayTagContainer::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    FGameplayTagContainer::RemoveTags((FGameplayTagContainer *)(lVar1 + 0x638),param_1);
    (**(code **)(this->_padding_ + 0xd8))(this,param_2,1);
  }
  return;
}

// ReorderMappings @ 14a6f3550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> * __thiscall
IEnhancedInputSubsystemInterface::ReorderMappings
          (IEnhancedInputSubsystemInterface *this,
          TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UEnhancedPlayerInput::FDependentChordTracker,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar8;
  FEnhancedActionKeyMapping *pFVar9;
  FEnhancedActionKeyMapping *pFVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  FEnhancedActionKeyMapping *pFVar14;
  undefined1 auStackY_168 [32];
  undefined1 local_118;
  undefined1 local_117 [3];
  undefined2 local_114 [2];
  undefined1 local_110 [5];
  char local_10b;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> local_108;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> local_f8;
  TArray<UEnhancedPlayerInput::FDependentChordTracker,TSizedDefaultAllocator<32>_> *local_e8;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *local_e0;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *local_d8;
  TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_d0;
  FEnhancedActionKeyMapping *local_c8;
  TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_c0;
  TArray<UEnhancedPlayerInput::FDependentChordTracker,TSizedDefaultAllocator<32>_> *local_b8;
  undefined2 *local_b0;
  FString local_a8;
  TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  iVar13 = 0;
  uVar3 = param_1->ArrayNum;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  local_e8 = param_2;
  local_e0 = __return_storage_ptr__;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,uVar3,&local_108.AllocatorInstance,0,&local_108.ArrayMax);
  }
  iVar7 = param_1->ArrayNum;
  pFVar10 = (FEnhancedActionKeyMapping *)(param_1->AllocatorInstance).Data;
  pFVar14 = pFVar10 + iVar7;
  while( true ) {
    if (param_1->ArrayNum != iVar7) {
      local_118 = 0;
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_118);
    }
    pTVar8 = local_e0;
    bVar5 = false;
    if (pFVar10 == pFVar14) break;
    if ((pFVar10->Action).field0_0x0.DebugPtr == (UInputAction *)0x0) {
      iVar13 = iVar13 + 1;
      if (2 < (byte)LogEnhancedInput._0_1_) {
        FKey::ToString(&pFVar10->Key,&local_a8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = pFVar10 + 1;
    }
    else {
      local_c0 = &local_98;
      local_114[0] = 0;
      local_b0 = local_114;
      local_c8 = pFVar10;
      local_b8 = param_2;
      ``IEnhancedInputSubsystemInterface::ReorderMappings'::__l2::<lambda_1>::operator()'::__l2::
      <lambda_1>::operator()
                (&local_c8,(TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *)local_110);
      if ((pFVar10->Action).field0_0x0.DebugPtr == (UInputAction *)0x0) {
        local_117[0] = 0;
        ``IEnhancedInputSubsystemInterface::ReorderMappings'::__l2::<lambda_1>::operator()'::__l2::
        <lambda_2>::operator()(local_117);
      }
      ``IEnhancedInputSubsystemInterface::ReorderMappings'::__l2::<lambda_1>::operator()'::__l2::
      <lambda_1>::operator()
                (&local_c8,(TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *)(local_110 + 4));
      if ((local_110[0] != '\0') || (local_110[4] != '\0')) {
        bVar5 = true;
      }
      if ((local_110[1] == '\0') && (local_10b == '\0')) {
        bVar12 = 0;
      }
      else {
        bVar12 = 2;
      }
      pTVar8 = &local_f8;
      if (!bVar5) {
        pTVar8 = &local_108;
      }
      pFVar9 = (FEnhancedActionKeyMapping *)(pTVar8->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar10) && (pFVar10 < pFVar9 + pTVar8->ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar6 = pTVar8->ArrayNum;
      if (iVar6 == pTVar8->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
      }
      pTVar8->ArrayNum = iVar6 + 1;
      pFVar9 = FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
                         ((FEnhancedActionKeyMapping *)
                          ((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 0x50),pFVar10);
      pFVar9->bHasAlwaysTickTrigger = '\0';
      pFVar9->field_0x40 = pFVar9->field_0x40 | bVar12;
      pFVar10 = pFVar10 + 1;
      param_2 = local_e8;
    }
  }
  piVar1 = &local_e0->ArrayNum;
  (local_e0->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  piVar2 = &local_e0->ArrayMax;
  *piVar2 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,uVar3,&local_e0->AllocatorInstance,0,piVar2);
  }
  local_d0 = &local_98;
  local_d8 = pTVar8;
  `IEnhancedInputSubsystemInterface::ReorderMappings'::__l2::<lambda_2>::operator()
            (&local_d8,&local_f8);
  `IEnhancedInputSubsystemInterface::ReorderMappings'::__l2::<lambda_2>::operator()
            (&local_d8,&local_108);
  if ((pTVar8 == &local_f8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  lVar11 = (longlong)local_f8.ArrayNum;
  if (local_f8.ArrayNum != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,local_f8.ArrayNum,&pTVar8->AllocatorInstance,piVar1,piVar2);
    memmove((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 0x50,
            local_f8.AllocatorInstance.Data,lVar11 * 0x50);
    local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  }
  if ((pTVar8 == &local_108) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  lVar11 = (longlong)local_108.ArrayNum;
  if (local_108.ArrayNum != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,local_108.ArrayNum,&pTVar8->AllocatorInstance,piVar1,piVar2);
    memmove((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 0x50,
            local_108.AllocatorInstance.Data,lVar11 * 0x50);
    local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
  }
  if ((*piVar1 != param_1->ArrayNum - iVar13) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OrderedMappings.Num() == UnorderedMappings.Num() - NumEmptyMappings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystemInterface.cpp"
                         ,0x363,L"Number of mappings unexpectedly changed during reorder."), bVar5))
  {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  DestructItems<FEnhancedActionKeyMapping,int>
            ((FEnhancedActionKeyMapping *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FEnhancedActionKeyMapping *)local_108.AllocatorInstance.Data !=
      (FEnhancedActionKeyMapping *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  DestructItems<FEnhancedActionKeyMapping,int>
            ((FEnhancedActionKeyMapping *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FEnhancedActionKeyMapping *)local_f8.AllocatorInstance.Data !=
      (FEnhancedActionKeyMapping *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  return pTVar8;
}

// RequestRebuildControlMappings @ 14a6f3a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::RequestRebuildControlMappings
          (IEnhancedInputSubsystemInterface *this,FModifyContextOptions *param_1,
          EInputMappingRebuildType param_2)

{
  TObjectPtr<UInputMappingContext_const_>_u_0 *pTVar1;
  FKey *pFVar2;
  TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  FEnhancedActionKeyMapping *pFVar5;
  TSharedPtr<FKeyDetails,1> *pTVar6;
  byte *pbVar7;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *this_00;
  TObjectPtr<UInputMappingContext_const_>_u_0 *pTVar8;
  TMap<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
  *this_01;
  char cVar9;
  FModifyContextOptions FVar10;
  UPlatformSettingsManager *this_02;
  UObject *pUVar11;
  TObjectPtr<UInputAction_const_>_u_0 TVar12;
  TReferenceControllerBase<1> *pTVar13;
  FKeyDetails *pFVar14;
  UInputAction *pUVar15;
  FName FVar16;
  code *pcVar17;
  undefined8 uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  double dVar20;
  EInputActionValueType EVar21;
  undefined7 uVar22;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *pTVar23;
  FEnhancedActionKeyMapping *pFVar24;
  longlong *plVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  UEnhancedPlayerInput *pUVar32;
  UEnhancedInputDeveloperSettings *pUVar33;
  UClass *pUVar34;
  UEnhancedInputPlatformSettings *this_03;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar35;
  FAppliedInputContextData *pFVar36;
  UEnhancedInputUserSettings *this_04;
  UEnhancedPlayerMappableKeyProfile *pUVar37;
  FString *pFVar38;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar39;
  FKeyConsumptionOptions *this_05;
  int *piVar40;
  FKeyState *pFVar41;
  FInputActionInstance *pFVar42;
  FInputActionValue *pFVar43;
  FScriptContainerElement FVar44;
  ulonglong uVar45;
  longlong lVar46;
  ForElementType<unsigned_int> FVar47;
  ForElementType<FSetElementId> FVar48;
  FGameplayTagQuery *pFVar49;
  ulonglong uVar50;
  ForAnyElementType FVar51;
  ForAnyElementType FVar52;
  wchar_t *pwVar53;
  FGameplayTagContainer *pFVar54;
  UPlayerMappableKeySettings *pUVar55;
  FScriptContainerElement *pFVar56;
  FScriptContainerElement *pFVar57;
  FKey *pFVar58;
  FScriptContainerElement *pFVar59;
  wchar_t *pwVar60;
  uint uVar61;
  FEnhancedActionKeyMapping *pFVar62;
  TArray<UEnhancedPlayerInput::FDependentChordTracker,TSizedDefaultAllocator<32>_> *pTVar63;
  undefined1 auStackY_6c8 [32];
  ForAnyElementType FStack_670;
  undefined8 uStack_668;
  ForAnyElementType FStack_660;
  undefined8 uStack_658;
  undefined1 uStack_650;
  byte bStack_64f;
  undefined1 uStack_64e;
  undefined1 uStack_64d;
  undefined1 uStack_64c;
  undefined1 uStack_64b;
  undefined1 uStack_64a;
  undefined1 uStack_649;
  undefined1 uStack_648;
  undefined1 uStack_647;
  undefined1 uStack_646;
  undefined1 uStack_645;
  undefined1 uStack_644;
  undefined1 auStack_643 [3];
  uint uStack_640;
  ForAnyElementType FStack_638;
  int iStack_630;
  int iStack_62c;
  uint uStack_628;
  uint uStack_624;
  IEnhancedInputSubsystemInterface *pIStack_620;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_618;
  undefined1 uStack_608;
  undefined1 auStack_607 [7];
  UObject *pUStack_600;
  UEnhancedPlayerInput *pUStack_5f8;
  UObject *pUStack_5f0;
  UObject *pUStack_5e8;
  FEnhancedActionKeyMapping *pFStack_5e0;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *pTStack_5d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5d0;
  int iStack_5b0;
  undefined4 uStack_5ac;
  FEnhancedActionKeyMapping *pFStack_5a8;
  FEnhancedActionKeyMapping *pFStack_5a0;
  FKey *pFStack_598;
  UEnhancedPlayerMappableKeyProfile *pUStack_590;
  uint uStack_588;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> TStack_580;
  TArray<UEnhancedPlayerInput::FDependentChordTracker,TSizedDefaultAllocator<32>_> *pTStack_570;
  FGameplayTagContainer *pFStack_568;
  FName FStack_560;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *pTStack_558;
  longlong lStack_550;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_548;
  undefined8 uStack_540;
  longlong lStack_538;
  int iStack_530;
  undefined4 uStack_52c;
  FName FStack_528;
  FName FStack_520;
  FKey *pFStack_518;
  FString FStack_510;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_500;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4c0;
  undefined1 auStack_4a0 [12];
  undefined1 auStack_494 [12];
  FSharedReferencer<1> FStack_488;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *pTStack_480;
  TMap<FKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,int,0>_> *pTStack_478;
  FValueComparisonClass<_private:_void___cdecl_IEnhancedInputSubsystemInterface::RebuildControlMappings(void)_::_2_::<lambda_1>_>
  FStack_470;
  FName FStack_468;
  undefined8 uStack_460;
  UObject *pUStack_458;
  FName FStack_450;
  longlong lStack_448;
  TObjectPtr<UInputMappingContext_const_>_u_0 TStack_440;
  UObject *pUStack_438;
  undefined8 *puStack_430;
  FString FStack_428;
  FKeyDetails *pFStack_418;
  TReferenceControllerBase<1> *pTStack_410;
  UClass *pUStack_408;
  FName FStack_400;
  FString FStack_3f8;
  undefined1 auStack_3e8 [12];
  uint uStack_3dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3d8;
  undefined8 uStack_3d0;
  longlong lStack_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  longlong *plStack_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b0;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined8 **ppuStack_380;
  TObjectPtr<UInputMappingContext_const_>_u_0 *pTStack_378;
  FAppliedInputContextData *pFStack_370;
  code *pcStack_368;
  undefined1 *puStack_360;
  FKey FStack_358;
  undefined1 auStack_340 [40];
  int iStack_318;
  undefined4 uStack_314;
  FString FStack_310;
  FString FStack_300;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *pTStack_2f0;
  longlong lStack_2e8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  FString FStack_2c0;
  FGameplayTagQuery FStack_2b0;
  TRangedForIterator TStack_268;
  TVector<double>_u_0 TStack_238;
  undefined8 uStack_220;
  FString FStack_218;
  FString FStack_208;
  FString FStack_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  FInputActionValue FStack_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined1 auStack_188 [32];
  ForElementType<unsigned_int> FStack_168;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  undefined1 auStack_150 [8];
  ForElementType<FSetElementId> FStack_148;
  int iStack_140;
  undefined1 auStack_138 [40];
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined1 auStack_100 [8];
  ForElementType<FSetElementId> FStack_f8;
  int iStack_f0;
  undefined1 auStack_e8 [32];
  undefined8 uStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  void *pvStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [40];
  int iStack_70;
  int iStack_64;
  ForElementType<FSetElementId> FStack_58;
  int iStack_50;
  ulonglong uStack_48;
  
  this->bMappingRebuildPending = true;
  this->MappingRebuildPending = param_2;
  this->bIgnoreAllPressedKeysUntilReleaseOnRebuild =
       (bool)(this->bIgnoreAllPressedKeysUntilReleaseOnRebuild &
             param_1->bIgnoreAllPressedKeysUntilRelease);
  if (param_1->bForceImmediately == '\0') {
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  uStack_640 = 0;
  if ((this->MappingRebuildPending != None) &&
     (pIStack_620 = this, pUVar32 = (UEnhancedPlayerInput *)(**(code **)(this->_padding_ + 0x10))(),
     pUVar32 != (UEnhancedPlayerInput *)0x0)) {
    pFStack_568 = &pUVar32->CurrentInputMode;
    pUStack_5f8 = pUVar32;
    pUVar33 = GetDefault<UEnhancedInputDeveloperSettings>();
    pTStack_480 = &pUVar32->EnhancedActionMappings;
    FStack_638.Data = (pTStack_480->AllocatorInstance).Data;
    bStack_64f = pUVar33->field_0xf0;
    (pTStack_480->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iStack_630 = (pUVar32->EnhancedActionMappings).ArrayNum;
    iStack_62c = (pUVar32->EnhancedActionMappings).ArrayMax;
    (pUVar32->EnhancedActionMappings).ArrayNum = 0;
    (pUVar32->EnhancedActionMappings).ArrayMax = 0;
    DestructItems<FEnhancedActionKeyMapping,int>
              ((FEnhancedActionKeyMapping *)(pTStack_480->AllocatorInstance).Data,0);
    pTStack_478 = &pUVar32->EnhancedKeyBinds;
    (pUVar32->EnhancedActionMappings).ArrayNum = 0;
    TSet<TTuple<FKey,int>,TDefaultMapHashableKeyFuncs<FKey,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FKey,int>,TDefaultMapHashableKeyFuncs<FKey,int,0>,FDefaultSetAllocator>
                *)pTStack_478);
    pbVar7 = (byte *)((longlong)&pUVar32->_padding_ + 4);
    *pbVar7 = *pbVar7 & 0xfe;
    auStack_494._4_8_ = &pUVar32->KeyConsumptionData;
    TSet<TTuple<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>,FDefaultSetAllocator>
             *)auStack_494._4_8_);
    this_01 = &this->AppliedContextRedirects;
    TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
             *)this_01);
    TMap<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
    ::
    TMap<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
              ((TMap<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                *)auStack_98,&pUVar32->AppliedInputContextData);
    pUVar34 = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
    if ((pUVar34->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar34);
    }
    this_02 = (UPlatformSettingsManager *)(pUVar34->ClassDefaultObject).field0_0x0.DebugPtr;
    pUStack_408 = UEnhancedInputPlatformSettings::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_408 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUStack_408);
    }
    this_03 = (UEnhancedInputPlatformSettings *)
              UPlatformSettingsManager::GetSettingsForPlatform
                        (this_02,(TSubclassOf<UPlatformSettings>)&pUStack_408);
    if (this_03 == (UEnhancedInputPlatformSettings *)0x0) {
      pFVar38 = GetTypeName<UEnhancedInputPlatformSettings>(&FStack_1f8);
      if ((pFVar38->Data).ArrayNum == 0) {
        pwVar60 = L"";
      }
      else {
        pwVar60 = (wchar_t *)(pFVar38->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar60);
    }
    pUVar34 = UEnhancedInputPlatformSettings::StaticClass();
    iVar29 = (int)pUVar34->_padding_;
    if ((*(int *)(this_03->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar34->_padding_)) {
      pFVar38 = GetTypeName<UEnhancedInputPlatformSettings>(&FStack_218);
      pwVar60 = L"";
      if ((pFVar38->Data).ArrayNum == 0) {
        pwVar53 = L"";
      }
      else {
        pwVar53 = (wchar_t *)(pFVar38->Data).AllocatorInstance.Data;
      }
      pFVar38 = GetFullNameForCastLogError<UPlatformSettings>
                          (&FStack_208,(UPlatformSettings *)this_03);
      if ((pFVar38->Data).ArrayNum != 0) {
        pwVar60 = (wchar_t *)(pFVar38->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar60,pwVar53);
    }
    uStack_bc = 0x80;
    puStack_430 = (undefined8 *)auStack_e8;
    auStack_e8._0_8_ = 0;
    ppuStack_380 = &puStack_430;
    auStack_e8._8_8_ = 0;
    uStack_c8 = 0;
    pcStack_388 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UEnhancedInputPlatformSettings::GetAllMappingContextRedirects'::__l2::<lambda_1>,void,UEnhancedInputPlatformData_const_&>
                  ::Call;
    iStack_c0 = 0;
    uStack_b8 = 0xffffffff;
    iStack_b4 = 0;
    pvStack_a8 = (void *)0x0;
    uStack_a0 = 0;
    UEnhancedInputPlatformSettings::ForEachInputData
              (this_03,(TFunctionRef<void___cdecl(UEnhancedInputPlatformData_const_&)> *)
                       &pcStack_388);
    TStack_4c0._padding_._4_4_ = 1;
    TStack_4c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_e8 + 0x10);
    TStack_4c0._padding_._0_4_ = 0;
    TStack_4c0.UnvisitedBitMask = 0xffffffff;
    TStack_4c0.CurrentBitIndex = 0;
    TStack_4c0.BaseBitIndex = 0;
    if (iStack_c0 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4c0);
    }
    TStack_5d0._padding_ = CONCAT44(TStack_4c0._padding_._4_4_,(undefined4)TStack_4c0._padding_);
    pTStack_5d8 = (TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                   *)auStack_e8;
    TStack_5d0._16_8_ = CONCAT44(TStack_4c0.CurrentBitIndex,TStack_4c0.UnvisitedBitMask);
    TStack_5d0._24_8_ = CONCAT44(TStack_4c0._28_4_,TStack_4c0.BaseBitIndex);
    iStack_5b0 = auStack_e8._8_4_ - iStack_b4;
    TStack_5d0.Array = TStack_4c0.Array;
    pTStack_3d8 = TStack_4c0.Array;
    uStack_3bc = uStack_5ac;
    auStack_3e8._0_8_ = pTStack_5d8;
    unique0x10003704 = TStack_5d0._padding_;
    uStack_3d0 = TStack_5d0._16_8_;
    lStack_3c8 = TStack_5d0._24_8_;
    iStack_3c0 = iStack_5b0;
    pTVar35 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&TStack_1e8,(TBitArray<FDefaultBitArrayAllocator> *)(auStack_e8 + 0x10),
                         iStack_c0);
    pTStack_5d8 = (TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                   *)auStack_e8;
    TStack_5d0._padding_ = pTVar35->_padding_;
    TStack_5d0.Array = pTVar35->Array;
    TStack_5d0.UnvisitedBitMask = pTVar35->UnvisitedBitMask;
    TStack_5d0.CurrentBitIndex = pTVar35->CurrentBitIndex;
    TStack_5d0._24_8_ = *(undefined8 *)&pTVar35->BaseBitIndex;
    iStack_5b0 = auStack_e8._8_4_ - iStack_b4;
    TStack_268.InitialNum = auStack_e8._8_4_ - iStack_b4;
    TStack_268._44_4_ = uStack_5ac;
    TStack_268._padding_ = (longlong)pTStack_5d8;
    TStack_268._padding_ = TStack_5d0._padding_;
    TStack_268._padding_ = (longlong)TStack_5d0.Array;
    TStack_268._padding_ = TStack_5d0._16_8_;
    TStack_268._padding_ = TStack_5d0._24_8_;
    bVar26 = TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)auStack_3e8,&TStack_268);
    uVar61 = 0;
    if (bVar26) {
      do {
        pTVar8 = (TObjectPtr<UInputMappingContext_const_>_u_0 *)
                 (*(longlong *)auStack_3e8._0_8_ + (longlong)uStack_3d0._4_4_ * 0x18);
        pUVar11 = *(UObject **)(*(longlong *)auStack_3e8._0_8_ + (longlong)uStack_3d0._4_4_ * 0x18);
        if ((pUVar11 == (UObject *)0x0) ||
           (pTVar1 = pTVar8 + 1, pTVar8[1].DebugPtr == (UInputMappingContext *)0x0)) {
          if (1 < (byte)LogEnhancedInput._0_1_) {
            (**(code **)(this_03->_padding_ + 0x248))(this_03);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
          }
        }
        else {
          pUStack_438 = pUVar11;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar11);
          }
          pFVar36 = TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                    ::Find((TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                            *)auStack_98,(TObjectPtr<UInputMappingContext_const_>)&pUStack_438);
          if (pFVar36 != (FAppliedInputContextData *)0x0) {
            TStack_440.DebugPtr = *(UInputMappingContext **)pTVar8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TStack_440.DebugPtr != (UInputMappingContext *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TStack_440.DebugPtr);
            }
            TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
            ::Remove((TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                      *)auStack_98,(TObjectPtr<UInputMappingContext_const_>)&TStack_440);
            pTStack_378 = pTVar1;
            pFStack_370 = pFVar36;
            TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TObjectPtr<UInputMappingContext_const_>_const_&,FAppliedInputContextData_const_&>_>
                      ((TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
                        *)auStack_98,
                       (TPairInitializer<TObjectPtr<UInputMappingContext_const_>_const_&,FAppliedInputContextData_const_&>
                        *)auStack_4a0,(bool *)&pTStack_378);
            TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
            ::
            Emplace<TObjectPtr<UInputMappingContext_const_>_const_&,TObjectPtr<UInputMappingContext_const_>_const_&>
                      ((TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
                        *)this_01,(TObjectPtr<UInputMappingContext_const_> *)&pTVar8->ObjectPtr,
                       (TObjectPtr<UInputMappingContext_const_> *)&pTVar1->ObjectPtr);
            if ((this_03->bShouldLogMappingContextRedirects != false) &&
               (4 < (byte)LogEnhancedInput._0_1_)) {
              FStack_450 = *(FName *)((longlong)pTVar1->DebugPtr + 0x18);
              ::FName::ToString(&FStack_450,&FStack_3f8);
              FStack_468 = *(FName *)((longlong)pTVar8->DebugPtr + 0x18);
              ::FName::ToString(&FStack_468,&FStack_428);
              (**(code **)(this_03->_padding_ + 0x248))(this_03);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput)
              ;
              if (FStack_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_428.Data.AllocatorInstance.Data);
              }
              if (FStack_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_3f8.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0 & ~uStack_3dc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(auStack_3e8 + 8));
        bVar26 = TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)auStack_3e8,&TStack_268);
        this = pIStack_620;
        uVar61 = uStack_640;
      } while (bVar26);
    }
    pUVar37 = (UEnhancedPlayerMappableKeyProfile *)0x0;
    uStack_a0 = 0;
    if (pvStack_a8 != (void *)0x0) {
      FMemory::Free(pvStack_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)auStack_e8);
    FStack_470.Predicate.Predicate =
         (TDereferenceWrapper<FAppliedInputContextData,_private:_void___cdecl_IEnhancedInputSubsystemInterface::RebuildControlMappings(void)_::_2_::<lambda_1>_>
          )auStack_607;
    TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>::FValueComparisonClass<_IEnhancedInputSubsystemInterface::RebuildControlMappings_::__l2::<lambda_1>_>_>
              ((TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
                *)auStack_98,&FStack_470);
    pTVar63 = &pUVar32->DependentChordActions;
    auStack_138._0_8_ = (FScriptContainerElement *)0x0;
    auStack_138._8_8_ = 0;
    piVar40 = &(pUVar32->DependentChordActions).ArrayMax;
    auStack_138._32_8_ = (ForElementType<unsigned_int>)0x0;
    iStack_110 = 0;
    iStack_10c = 0x80;
    iStack_108 = -1;
    iStack_104 = 0;
    FStack_f8 = (ForElementType<FSetElementId>)0x0;
    iStack_f0 = 0;
    TStack_618.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_618.ArrayNum = 0;
    TStack_618.ArrayMax = 0;
    (pUVar32->DependentChordActions).ArrayNum = 0;
    pTStack_570 = pTVar63;
    if (*piVar40 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar63->AllocatorInstance,0,piVar40);
    }
    this_04 = (UEnhancedInputUserSettings *)(**(code **)(this->_padding_ + 0x18))(this);
    if (this_04 != (UEnhancedInputUserSettings *)0x0) {
      pUVar37 = UEnhancedInputUserSettings::GetActiveKeyProfile(this_04);
    }
    TStack_500.Array = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10);
    FStack_660.Data = (FScriptContainerElement *)0x0;
    uStack_658 = 0;
    TStack_500._padding_._0_4_ = 0;
    TStack_500._padding_._4_4_ = 1;
    TStack_500.UnvisitedBitMask = 0xffffffff;
    TStack_500.CurrentBitIndex = 0;
    TStack_500.BaseBitIndex = 0;
    pUStack_590 = pUVar37;
    if (iStack_70 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_500);
    }
    TStack_3b0._padding_ = CONCAT44(TStack_500._padding_._4_4_,(undefined4)TStack_500._padding_);
    plStack_3b8 = (longlong *)auStack_98;
    TStack_3b0.CurrentBitIndex = TStack_500.CurrentBitIndex;
    TStack_3b0.UnvisitedBitMask = TStack_500.UnvisitedBitMask;
    TStack_3b0._28_4_ = TStack_500._28_4_;
    TStack_3b0.BaseBitIndex = TStack_500.BaseBitIndex;
    iStack_318 = auStack_98._8_4_ - iStack_64;
    auStack_340._16_8_ = TStack_500.Array;
    uStack_390 = CONCAT44(uStack_314,iStack_318);
    TStack_3b0.Array = TStack_500.Array;
    auStack_340._0_8_ = plStack_3b8;
    auStack_340._8_8_ = TStack_3b0._padding_;
    auStack_340._24_8_ = TStack_3b0._16_8_;
    auStack_340._32_8_ = TStack_3b0._24_8_;
    pTVar35 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_340,
                         (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10),iStack_70);
    pTStack_558 = (TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                   *)auStack_98;
    lStack_550 = pTVar35->_padding_;
    pTStack_548 = pTVar35->Array;
    uStack_540._0_4_ = pTVar35->UnvisitedBitMask;
    uStack_540._4_4_ = pTVar35->CurrentBitIndex;
    lStack_538 = *(longlong *)&pTVar35->BaseBitIndex;
    iStack_530 = auStack_98._8_4_ - iStack_64;
    uStack_2c8 = CONCAT44(uStack_52c,iStack_530);
    pFVar54 = &pUVar32->CurrentInputMode;
    pTStack_2f0 = pTStack_558;
    lStack_2e8 = lStack_550;
    pTStack_2e0 = pTStack_548;
    uStack_2d8 = uStack_540;
    uStack_2d0 = lStack_538;
    while( true ) {
      plVar25 = plStack_3b8;
      if ((int)plStack_3b8[1] - *(int *)((longlong)plStack_3b8 + 0x34) != (int)uStack_390) {
        uStack_650 = 0;
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_650);
      }
      if (((TStack_3b0.CurrentBitIndex == uStack_2d8._4_4_) && (TStack_3b0.Array == pTStack_2e0)) &&
         ((TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
           *)plVar25 == pTStack_2f0)) break;
      FStack_670.Data = (FScriptContainerElement *)0x0;
      lVar46 = *(longlong *)(*plVar25 + (longlong)TStack_3b0.CurrentBitIndex * 0x18);
      uStack_668 = 0;
      if (((bStack_64f & 0x10) == 0) || (cVar9 = *(char *)(lVar46 + 0xa0), cVar9 == '\x02')) {
LAB_14a6ed6a1:
        bVar26 = false;
      }
      else {
        uVar61 = uVar61 | 1;
        if (cVar9 == '\0') {
          pUVar33 = GetDefault<UEnhancedInputDeveloperSettings>();
          pFVar49 = &pUVar33->DefaultMappingContextInputModeQuery;
LAB_14a6ed67d:
          FGameplayTagQuery::FGameplayTagQuery(&FStack_2b0,pFVar49);
        }
        else {
          if (cVar9 == '\x01') {
            pFVar49 = (FGameplayTagQuery *)(lVar46 + 0xa8);
            goto LAB_14a6ed67d;
          }
          lStack_448 = lVar46;
          `UInputMappingContext::GetInputModeQuery'::__l7::<lambda_1>::operator()(&lStack_448);
          FGameplayTagQuery::FGameplayTagQuery(&FStack_2b0);
        }
        bVar26 = FGameplayTagQuery::Matches(&FStack_2b0,pFVar54);
        if (bVar26) goto LAB_14a6ed6a1;
        bVar26 = true;
      }
      if ((uVar61 & 1) != 0) {
        uVar61 = uVar61 & 0xfffffffe;
        if (FStack_2b0.AutoDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(FStack_2b0.AutoDescription.Data.AllocatorInstance.Data);
        }
        if (FStack_2b0.UserDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(FStack_2b0.UserDescription.Data.AllocatorInstance.Data);
        }
        if (FStack_2b0.QueryTokenStream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_2b0.QueryTokenStream.AllocatorInstance.Data);
        }
        if (FStack_2b0.TagDictionary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_2b0.TagDictionary.AllocatorInstance.Data);
        }
      }
      if (bVar26) {
        if (4 < (byte)LogEnhancedInput._0_1_) {
          FGameplayTagContainer::ToString(pFStack_568,&FStack_300);
          if (lVar46 == 0) {
            ::FString::FString(&FStack_510,L"None");
          }
          else {
            FStack_400 = *(FName *)(lVar46 + 0x18);
            ::FName::ToString(&FStack_400,&FStack_510);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
          if (FStack_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_510.Data.AllocatorInstance.Data);
          }
          if (FStack_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_300.Data.AllocatorInstance.Data);
          }
        }
        DestructItems<FKey,int>((FKey *)FStack_670.Data,(int)uStack_668);
        if ((FKey *)FStack_670.Data != (FKey *)0x0) {
          FMemory::Free(FStack_670.Data);
        }
      }
      else {
        if (pUVar37 == (UEnhancedPlayerMappableKeyProfile *)0x0) {
          uVar61 = uVar61 | 4;
          uStack_640 = uVar61;
          pFVar38 = ::FString::FString(&FStack_310,L"");
        }
        else {
          uVar61 = uVar61 | 2;
          uStack_640 = uVar61;
          pFVar38 = ::FString::FString(&FStack_2c0,&pUVar37->ProfileIdentifierString);
        }
        pTVar39 = &TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
                   ::Find((TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
                           *)(lVar46 + 0x50),pFVar38)->Mappings;
        if (pTVar39 == (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)0x0) {
          pTVar39 = (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)(lVar46 + 0x40)
          ;
        }
        ReorderMappings(this,&TStack_580,pTVar39,pTVar63);
        if (((uVar61 & 4) != 0) &&
           (uVar61 = uVar61 & 0xfffffffb, uStack_640 = uVar61,
           FStack_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(FStack_310.Data.AllocatorInstance.Data);
        }
        if (((uVar61 & 2) != 0) &&
           (uStack_640 = uVar61 & 0xfffffffd,
           FStack_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(FStack_2c0.Data.AllocatorInstance.Data);
        }
        uVar45 = (ulonglong)TStack_580.ArrayNum;
        uStack_624 = TStack_580.ArrayNum;
        pFStack_5a8 = (FEnhancedActionKeyMapping *)
                      (TStack_580.AllocatorInstance.Data + uVar45 * 0x50);
        uVar50 = uVar45;
        FVar52.Data = TStack_580.AllocatorInstance.Data;
        while( true ) {
          pFVar62 = pFStack_5a8;
          pFStack_5e0 = (FEnhancedActionKeyMapping *)FVar52.Data;
          if ((int)uVar45 != (int)uVar50) {
            uStack_64e = 0;
            `TCheckedPointerIterator<FEnhancedActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&uStack_64e);
          }
          if ((FEnhancedActionKeyMapping *)FVar52.Data == pFVar62) break;
          if ((longlong)uStack_658 < 0) {
            DestructItems<FKey,int>((FKey *)FStack_660.Data,(uint)uStack_658);
            bVar26 = uStack_658._4_4_ != 0;
            uStack_658 = (ulonglong)uStack_658._4_4_ << 0x20;
            if (bVar26) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,&FStack_660,0,(int *)((longlong)&uStack_658 + 4));
            }
          }
          else {
            DestructItems<FKey,int>((FKey *)FStack_660.Data,(uint)uStack_658);
            uStack_658 = uStack_658 & 0xffffffff00000000;
          }
          if (((FEnhancedActionKeyMapping *)FVar52.Data)->SettingBehavior ==
              InheritSettingsFromAction) {
            TVar12 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Action).field0_0x0;
            pUVar55 = (UPlayerMappableKeySettings *)0x0;
            if ((TVar12.DebugPtr != (UInputAction *)0x0) &&
               (pUVar55 = *(UPlayerMappableKeySettings **)((longlong)TVar12 + 0x70),
               UE::GC::GIsIncrementalReachabilityPending != false)) {
              if (pUVar55 == (UPlayerMappableKeySettings *)0x0) goto LAB_14a6ed9d7;
              UE::GC::MarkAsReachable((UObject *)pUVar55);
            }
LAB_14a6ed956:
            if (pUVar55 == (UPlayerMappableKeySettings *)0x0) goto LAB_14a6ed9d7;
            if (pUVar37 == (UEnhancedPlayerMappableKeyProfile *)0x0) goto LAB_14a6eda1a;
            if ((pUVar55->SupportedKeyProfileIds).ArrayNum == 0) goto LAB_14a6ed9dc;
            pFVar57 = (pUVar55->SupportedKeyProfileIds).AllocatorInstance.Data;
            pFVar56 = pFVar57 + (longlong)(pUVar55->SupportedKeyProfileIds).ArrayNum * 0x10;
            if (pFVar57 == pFVar56) goto LAB_14a6ee3f0;
            do {
              iVar29 = *(int *)(pFVar57 + 8);
              iVar31 = (pUVar37->ProfileIdentifierString).Data.ArrayNum;
              if (iVar29 == iVar31) {
                if (iVar29 < 2) goto LAB_14a6ed9dc;
                iVar29 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)pFVar57,
                                    (wchar_t *)
                                    (pUVar37->ProfileIdentifierString).Data.AllocatorInstance.Data);
                bVar26 = iVar29 == 0;
              }
              else {
                bVar26 = iVar29 + iVar31 == 1;
              }
              if (bVar26) goto LAB_14a6ed9dc;
              pFVar57 = pFVar57 + 0x10;
            } while (pFVar57 != pFVar56);
            uVar45 = (ulonglong)(uint)TStack_580.ArrayNum;
            FVar52.Data = FVar52.Data + 0x50;
            uVar50 = (ulonglong)uStack_624;
          }
          else {
            if (((FEnhancedActionKeyMapping *)FVar52.Data)->SettingBehavior == OverrideSettings) {
              pUVar55 = (((FEnhancedActionKeyMapping *)FVar52.Data)->PlayerMappableKeySettings).
                        field0_0x0.DebugPtr;
              goto LAB_14a6ed956;
            }
LAB_14a6ed9d7:
            if (pUVar37 != (UEnhancedPlayerMappableKeyProfile *)0x0) {
LAB_14a6ed9dc:
              pUVar34 = UEnhancedInputDeveloperSettings::StaticClass();
              if ((pUVar34->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar34);
              }
              if ((*(byte *)((pUVar34->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 2) != 0) {
                (**(code **)(pUVar37->_padding_ + 0x2d0))(pUVar37,FVar52.Data);
              }
            }
LAB_14a6eda1a:
            if ((uint)uStack_658 == 0) {
              pFVar58 = &((FEnhancedActionKeyMapping *)FVar52.Data)->Key;
              if (((FStack_660.Data <= pFVar58) &&
                  (pFVar58 < FStack_660.Data + (longlong)(int)uStack_658._4_4_ * 0x18)) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar26)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              if ((uint)uStack_658 == uStack_658._4_4_) {
                iVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&FStack_660,(int *)((longlong)&uStack_658 + 4));
                uStack_658 = CONCAT44(uStack_658._4_4_,iVar29);
              }
              lVar46 = (longlong)(int)(uint)uStack_658;
              uStack_658 = CONCAT44(uStack_658._4_4_,(uint)uStack_658 + 1);
              *(FName *)&FStack_660.Data[lVar46 * 0x18].field_0x0 = pFVar58->KeyName;
              *(FKeyDetails **)(FStack_660.Data + lVar46 * 0x18 + 8) =
                   (((FEnhancedActionKeyMapping *)FVar52.Data)->Key).KeyDetails.Object;
              pTVar13 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Key).KeyDetails.
                        SharedReferenceCount.ReferenceController;
              *(TReferenceControllerBase<1> **)(FStack_660.Data + lVar46 * 0x18 + 0x10) = pTVar13;
              if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar13->SharedReferenceCount =
                     (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
                UNLOCK();
              }
            }
            uVar50 = (ulonglong)(int)(uint)uStack_658;
            uStack_588 = (uint)uStack_658;
            pFVar58 = (FKey *)(FStack_660.Data + uVar50 * 0x18);
            FVar51.Data = FStack_660.Data;
            pFStack_598 = pFVar58;
            while( true ) {
              pFStack_518 = (FKey *)FVar51.Data;
              if ((uint)uStack_658 != (int)uVar50) {
                uStack_64d = 0;
                `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&uStack_64d);
              }
              pUVar37 = pUStack_590;
              if ((FKey *)FVar51.Data == pFVar58) break;
              pFVar2 = &((FEnhancedActionKeyMapping *)FVar52.Data)->Key;
              pFVar2->KeyName = ((FKey *)FVar51.Data)->KeyName;
              pFVar14 = (((FKey *)FVar51.Data)->KeyDetails).Object;
              pTVar13 = (((FKey *)FVar51.Data)->KeyDetails).SharedReferenceCount.ReferenceController
              ;
              if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar13->SharedReferenceCount =
                     (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFStack_418 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Key).KeyDetails.Object;
              pTStack_410 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Key).KeyDetails.
                            SharedReferenceCount.ReferenceController;
              (((FEnhancedActionKeyMapping *)FVar52.Data)->Key).KeyDetails.Object = pFVar14;
              (((FEnhancedActionKeyMapping *)FVar52.Data)->Key).KeyDetails.SharedReferenceCount.
              ReferenceController = pTVar13;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_410);
              pUVar15 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Action).field0_0x0.DebugPtr;
              if (pUVar15->bConsumesActionAndAxisMappings != false) {
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar15 != (UInputAction *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar15);
                }
                uVar61 = ((uint)((ulonglong)pUVar15 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pUVar15 >> 4)) * -0x7a143595;
                uVar61 = (uVar61 >> 0xd ^ uVar61) * -0x3d4d51cb;
                this_05 = TMapBase<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>_>
                          ::FindOrAddImpl<TObjectPtr<UInputAction_const_>_const_&>
                                    ((TMapBase<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>_>
                                      *)auStack_494._4_8_,uVar61 >> 0x10 ^ uVar61,
                                     &((FEnhancedActionKeyMapping *)FVar52.Data)->Action);
                TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                          (&this_05->KeysToConsume,pFVar2);
                this_05->EventsToCauseConsumption =
                     this_05->EventsToCauseConsumption |
                     (ETriggerEvent)
                     ((((FEnhancedActionKeyMapping *)FVar52.Data)->Action).field0_0x0.DebugPtr)->
                     TriggerEventsThatConsumeLegacyKeys;
              }
              if ((((FEnhancedActionKeyMapping *)FVar52.Data)->Action).field0_0x0.DebugPtr !=
                  (UInputAction *)0x0) {
                FVar16 = pFVar2->KeyName;
                uVar61 = ::GetTypeHash(FVar16.ComparisonIndex.Value);
                if (auStack_138._8_4_ != iStack_104) {
                  FVar48 = (ForElementType<FSetElementId>)auStack_100;
                  if (FStack_f8 != (ForElementType<FSetElementId>)0x0) {
                    FVar48 = FStack_f8;
                  }
                  iVar29 = *(int *)((longlong)FVar48 +
                                   (ulonglong)(iStack_f0 - 1U & FVar16.Number + uVar61) * 4);
                  if (iVar29 != -1) {
                    do {
                      if (*(FName *)(auStack_138._0_8_ + (longlong)iVar29 * 0x20) == pFVar2->KeyName
                         ) goto LAB_14a6ee3d9;
                      iVar29 = *(int *)(auStack_138._0_8_ + (longlong)iVar29 * 0x20 + 0x18);
                    } while (iVar29 != -1);
                  }
                }
                pUVar15 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Action).field0_0x0.DebugPtr;
                pFVar56 = (pUVar15->Triggers).AllocatorInstance.Data;
                iVar29 = (pUVar15->Triggers).ArrayNum;
                pFVar57 = pFVar56 + (longlong)iVar29 * 8;
                while( true ) {
                  if ((pUVar15->Triggers).ArrayNum != iVar29) {
                    uStack_64c = 0;
                    `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&uStack_64c);
                  }
                  if (pFVar56 == pFVar57) {
                    puStack_360 = &uStack_64b;
                    bVar26 = false;
                    pcStack_368 = UE::Core::Private::Function::
                                  TFunctionRefCaller<`IEnhancedInputSubsystemInterface::RebuildControlMappings'::__l108::<lambda_2>,bool,UInputTrigger_const_*>
                                  ::Call;
                    bVar28 = HasTriggerWith(pIStack_620,
                                            (TFunctionRef<bool___cdecl(UInputTrigger_const_*)> *)
                                            &pcStack_368,
                                            (TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *)
                                            FVar52.Data);
                    if (bVar28) goto LAB_14a6edcc7;
                    bVar26 = false;
                    bVar28 = false;
                    if (((((FEnhancedActionKeyMapping *)FVar52.Data)->Action).field0_0x0.DebugPtr)->
                        bConsumeInput != false) {
                      if (((FStack_670.Data <= pFVar2) &&
                          (pFVar2 < FStack_670.Data + (longlong)uStack_668._4_4_ * 0x18)) &&
                         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar26)) {
                        pcVar17 = (code *)swi(3);
                        (*pcVar17)();
                        return;
                      }
                      iVar29 = (int)uStack_668;
                      if ((int)uStack_668 == uStack_668._4_4_) {
                        iVar29 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x818,&FStack_670,(int *)((longlong)&uStack_668 + 4));
                      }
                      bVar26 = false;
                      uStack_668 = CONCAT44(uStack_668._4_4_,iVar29 + 1);
                      lVar46 = (longlong)iVar29;
                      *(FName *)&FStack_670.Data[lVar46 * 0x18].field_0x0 = pFVar2->KeyName;
                      *(FKeyDetails **)(FStack_670.Data + lVar46 * 0x18 + 8) =
                           (((FEnhancedActionKeyMapping *)FVar52.Data)->Key).KeyDetails.Object;
                      pTVar13 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Key).KeyDetails.
                                SharedReferenceCount.ReferenceController;
                      *(TReferenceControllerBase<1> **)(FStack_670.Data + lVar46 * 0x18 + 0x10) =
                           pTVar13;
                      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        pTVar13->SharedReferenceCount =
                             (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
                        UNLOCK();
                        bVar26 = false;
                      }
                    }
                    goto LAB_14a6edccc;
                  }
                  FStack_488.ReferenceController = *(TReferenceControllerBase<1> **)pFVar56;
                  bVar26 = UE::Core::Private::Function::
                           TFunctionRefCaller<`IEnhancedInputSubsystemInterface::RebuildControlMappings'::__l108::<lambda_2>,bool,UInputTrigger_const_*>
                           ::Call(&uStack_64b,(UInputTrigger **)&FStack_488);
                  if (bVar26) break;
                  pFVar56 = pFVar56 + 8;
                }
                bVar26 = true;
LAB_14a6edcc7:
                bVar28 = true;
LAB_14a6edccc:
                pTVar39 = pTStack_480;
                uVar30 = TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::
                         AddUniqueImpl<FEnhancedActionKeyMapping_const_&>
                                   (pTStack_480,(FEnhancedActionKeyMapping *)FVar52.Data);
                FVar16 = pFVar2->KeyName;
                uVar61 = ::GetTypeHash(FVar16.ComparisonIndex.Value);
                piVar40 = TMapBase<FKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,int,0>_>
                          ::FindOrAddImpl<FKey_const_&>
                                    ((TMapBase<FKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,int,0>_>
                                      *)pTStack_478,FVar16.Number + uVar61,pFVar2);
                *piVar40 = *piVar40 + 1;
                pbVar7 = (byte *)((longlong)&pUStack_5f8->_padding_ + 4);
                *pbVar7 = *pbVar7 & 0xfe;
                uVar61 = 0;
                if ((int)uVar30 < pTVar39->ArrayNum) {
                  uVar61 = ~uVar30 >> 0x1f;
                }
                uStack_628 = uVar30;
                if ((uVar61 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pFVar62 = (FEnhancedActionKeyMapping *)
                          ((pTVar39->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x50);
                pFVar56 = (pFVar62->Modifiers).AllocatorInstance.Data;
                pTVar3 = &pFVar62->Modifiers;
                iVar29 = (pFVar62->Modifiers).ArrayNum;
                pFVar57 = pFVar56 + (longlong)iVar29 * 8;
                pFStack_5a0 = pFVar62;
                while( true ) {
                  if ((pFVar62->Modifiers).ArrayNum != iVar29) {
                    uStack_64a = 0;
                    `TCheckedPointerIterator<TObjectPtr<UInputModifier>_const_,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(&uStack_64a);
                  }
                  if (pFVar56 == pFVar57) break;
                  pFVar56 = pFVar56 + 8;
                }
                uVar61 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Modifiers).ArrayNum;
                if ((int)uVar61 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar61);
                }
                piVar40 = &(pFVar62->Modifiers).ArrayMax;
                (pFVar62->Modifiers).ArrayNum = 0;
                if (*piVar40 != uVar61) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,uVar61,&pTVar3->AllocatorInstance,0,piVar40);
                }
                pFVar5 = pFStack_5e0;
                pFVar56 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Modifiers).AllocatorInstance.
                          Data;
                iVar29 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Modifiers).ArrayNum;
                pFVar57 = pFVar56 + (longlong)iVar29 * 8;
                while( true ) {
                  if ((pFVar5->Modifiers).ArrayNum != iVar29) {
                    uStack_649 = 0;
                    `TCheckedPointerIterator<UInputModifier_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&uStack_649);
                  }
                  pFVar24 = pFStack_5a0;
                  if (pFVar56 == pFVar57) break;
                  pUVar11 = *(UObject **)pFVar56;
                  if (pUVar11 != (UObject *)0x0) {
                    FStack_528.ComparisonIndex.Value = 0;
                    FStack_528.Number = 0;
                    pUVar34 = UInputModifier::StaticClass();
                    pUStack_5f0 = DuplicateObject_Internal
                                            (pUVar34,pUVar11,(UObject *)0x0,FStack_528);
                    pFVar59 = (pTVar3->AllocatorInstance).Data;
                    if (((pFVar59 <= (FScriptContainerElement *)&pUStack_5f0) &&
                        ((FScriptContainerElement *)&pUStack_5f0 < pFVar59 + (longlong)*piVar40 * 8)
                        ) && (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar27)) {
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    iVar31 = (pFVar62->Modifiers).ArrayNum;
                    if (iVar31 == *piVar40) {
                      iVar31 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&pTVar3->AllocatorInstance,piVar40);
                    }
                    (pFVar62->Modifiers).ArrayNum = iVar31 + 1;
                    *(UObject **)((pTVar3->AllocatorInstance).Data + (longlong)iVar31 * 8) =
                         pUStack_5f0;
                  }
                  pFVar56 = pFVar56 + 8;
                }
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  pFVar57 = (pTVar3->AllocatorInstance).Data;
                  iVar29 = 0;
                  if (0 < (pFVar62->Modifiers).ArrayNum) {
                    do {
                      if (*(UObject **)pFVar57 != (UObject *)0x0) {
                        UE::GC::MarkAsReachable(*(UObject **)pFVar57);
                      }
                      iVar29 = iVar29 + 1;
                      pFVar57 = pFVar57 + 8;
                    } while (iVar29 < (pFVar62->Modifiers).ArrayNum);
                  }
                }
                ApplyAxisPropertyModifiers(pIStack_620,pUStack_5f8,pFVar24);
                pFVar56 = (pFVar24->Triggers).AllocatorInstance.Data;
                iVar29 = (pFVar24->Triggers).ArrayNum;
                pFVar57 = pFVar56 + (longlong)iVar29 * 8;
                while( true ) {
                  if ((pFVar24->Triggers).ArrayNum != iVar29) {
                    uStack_648 = 0;
                    `TCheckedPointerIterator<TObjectPtr<UInputTrigger>_const_,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(&uStack_648);
                  }
                  FVar52.Data = (FScriptContainerElement *)pFStack_5e0;
                  if (pFVar56 == pFVar57) break;
                  pFVar56 = pFVar56 + 8;
                }
                uVar61 = (pFStack_5e0->Triggers).ArrayNum;
                if ((int)uVar61 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar61);
                }
                piVar40 = &(pFVar24->Triggers).ArrayMax;
                (pFVar24->Triggers).ArrayNum = 0;
                if (*piVar40 != uVar61) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,uVar61,(ForAnyElementType *)pFVar24,0,piVar40);
                }
                pFVar56 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Triggers).AllocatorInstance.
                          Data;
                iVar29 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Triggers).ArrayNum;
                pFVar57 = pFVar56 + (longlong)iVar29 * 8;
                while( true ) {
                  if ((((FEnhancedActionKeyMapping *)FVar52.Data)->Triggers).ArrayNum != iVar29) {
                    uStack_647 = 0;
                    `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&uStack_647);
                  }
                  if (pFVar56 == pFVar57) break;
                  pUVar11 = *(UObject **)pFVar56;
                  if (pUVar11 != (UObject *)0x0) {
                    FStack_520.ComparisonIndex.Value = 0;
                    FStack_520.Number = 0;
                    pUVar34 = UInputTrigger::StaticClass();
                    pUStack_5e8 = DuplicateObject_Internal
                                            (pUVar34,pUVar11,(UObject *)0x0,FStack_520);
                    pFVar59 = (pFVar24->Triggers).AllocatorInstance.Data;
                    if (((pFVar59 <= (FScriptContainerElement *)&pUStack_5e8) &&
                        ((FScriptContainerElement *)&pUStack_5e8 < pFVar59 + (longlong)*piVar40 * 8)
                        ) && (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar27)) {
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                    iVar31 = (pFVar24->Triggers).ArrayNum;
                    if (iVar31 == *piVar40) {
                      iVar31 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,(ForAnyElementType *)pFVar24,piVar40);
                    }
                    (pFVar24->Triggers).ArrayNum = iVar31 + 1;
                    *(UObject **)((pFVar24->Triggers).AllocatorInstance.Data + (longlong)iVar31 * 8)
                         = pUStack_5e8;
                  }
                  pFVar56 = pFVar56 + 8;
                }
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  pFVar57 = (pFVar24->Triggers).AllocatorInstance.Data;
                  iVar29 = 0;
                  if (0 < (pFVar24->Triggers).ArrayNum) {
                    do {
                      if (*(UObject **)pFVar57 != (UObject *)0x0) {
                        UE::GC::MarkAsReachable(*(UObject **)pFVar57);
                      }
                      iVar29 = iVar29 + 1;
                      pFVar57 = pFVar57 + 8;
                    } while (iVar29 < (pFVar24->Triggers).ArrayNum);
                  }
                }
                pFVar58 = pFStack_598;
                if (bVar28) {
                  if (((TStack_618.AllocatorInstance.Data <= (FScriptContainerElement *)&uStack_628)
                      && ((FScriptContainerElement *)&uStack_628 <
                          TStack_618.AllocatorInstance.Data + (longlong)TStack_618.ArrayMax * 4)) &&
                     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar28)) {
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                  iVar29 = TStack_618.ArrayNum;
                  if (TStack_618.ArrayNum == TStack_618.ArrayMax) {
                    iVar29 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&TStack_618.AllocatorInstance,&TStack_618.ArrayMax);
                  }
                  TStack_618.ArrayNum = iVar29 + 1;
                  *(uint *)(TStack_618.AllocatorInstance.Data + (longlong)iVar29 * 4) = uStack_628;
                  pFVar58 = pFStack_598;
                  if (bVar26) {
                    pUVar15 = (((FEnhancedActionKeyMapping *)FVar52.Data)->Action).field0_0x0.
                              DebugPtr;
                    pFVar56 = (pUVar15->Triggers).AllocatorInstance.Data;
                    iVar29 = (pUVar15->Triggers).ArrayNum;
                    pFVar57 = pFVar56 + (longlong)iVar29 * 8;
                    while( true ) {
                      if ((pUVar15->Triggers).ArrayNum != iVar29) {
                        uStack_646 = 0;
                        `TCheckedPointerIterator<TObjectPtr<UInputTrigger>_const_,int,0>::
                        operator!='::__l2::<lambda_1>::operator()(&uStack_646);
                      }
                      pFVar58 = pFStack_598;
                      FVar52.Data = (FScriptContainerElement *)pFStack_5e0;
                      if (pFVar56 == pFVar57) break;
                      pUVar11 = *(UObject **)pFVar56;
                      if (pUVar11 != (UObject *)0x0) {
                        pUVar34 = UInputTriggerChordAction::StaticClass();
                        iVar31 = (int)pUVar34->_padding_;
                        if ((iVar31 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) +
                             (longlong)iVar31 * 8) == &pUVar34->_padding_)) {
                          FStack_560.ComparisonIndex.Value = 0;
                          FStack_560.Number = 0;
                          pUVar34 = UInputTrigger::StaticClass();
                          pUStack_600 = DuplicateObject_Internal
                                                  (pUVar34,pUVar11,(UObject *)0x0,FStack_560);
                          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                             (pUStack_600 != (UObject *)0x0)) {
                            UE::GC::MarkAsReachable(pUStack_600);
                          }
                          pFVar59 = (pFVar24->Triggers).AllocatorInstance.Data;
                          if (((pFVar59 <= (FScriptContainerElement *)&pUStack_600) &&
                              ((FScriptContainerElement *)&pUStack_600 <
                               pFVar59 + (longlong)*piVar40 * 8)) &&
                             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar26)) {
                            pcVar17 = (code *)swi(3);
                            (*pcVar17)();
                            return;
                          }
                          iVar31 = (pFVar24->Triggers).ArrayNum;
                          if (iVar31 == *piVar40) {
                            iVar31 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x808,(ForAnyElementType *)pFVar24,piVar40);
                          }
                          (pFVar24->Triggers).ArrayNum = iVar31 + 1;
                          *(UObject **)
                           ((pFVar24->Triggers).AllocatorInstance.Data + (longlong)iVar31 * 8) =
                               pUStack_600;
                          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                             (pUStack_600 != (UObject *)0x0)) {
                            UE::GC::MarkAsReachable(pUStack_600);
                          }
                        }
                      }
                      pFVar56 = pFVar56 + 8;
                    }
                  }
                }
              }
LAB_14a6ee3d9:
              uVar50 = (ulonglong)uStack_588;
              FVar51.Data = (FScriptContainerElement *)(pFStack_518 + 1);
            }
LAB_14a6ee3f0:
            uVar45 = (ulonglong)(uint)TStack_580.ArrayNum;
            FVar52.Data = FVar52.Data + 0x50;
            uVar50 = (ulonglong)uStack_624;
          }
        }
        uVar61 = (int)uStack_668 + (auStack_138._8_4_ - iStack_104);
        if ((uint)(auStack_138._8_4_ - iStack_104) < uVar61) {
          if ((int)uVar61 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar61);
          }
          TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)auStack_138,uVar61);
          if (uVar61 < 4) {
            iVar29 = 1;
          }
          else {
            uVar50 = (ulonglong)((uVar61 >> 1) + 7) * 2 + 1;
            lVar46 = 0x3f;
            if (uVar50 != 0) {
              for (; uVar50 >> lVar46 == 0; lVar46 = lVar46 + -1) {
              }
            }
            auStack_4a0._4_4_ = (undefined4)lVar46;
            iVar29 = 1 << ((byte)lVar46 & 0x1f);
          }
          if ((iStack_f0 == 0) || (iStack_f0 < iVar29)) {
            iStack_f0 = iVar29;
            TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::Rehash
                      ((TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)auStack_138);
          }
        }
        iVar29 = (int)uStack_668;
        pFVar58 = (FKey *)(FStack_670.Data + (longlong)(int)uStack_668 * 0x18);
        FVar52.Data = FStack_670.Data;
        while( true ) {
          if ((int)uStack_668 != iVar29) {
            uStack_645 = 0;
            `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&uStack_645);
          }
          if ((FKey *)FVar52.Data == pFVar58) break;
          TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::Emplace<FKey>
                    ((TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)auStack_138,
                     (FKey *)(auStack_4a0 + 8),(bool *)FVar52.Data);
          FVar52.Data = FVar52.Data + 0x18;
        }
        if ((longlong)uStack_668 < 0) {
          DestructItems<FKey,int>((FKey *)FStack_670.Data,(int)uStack_668);
          uVar50 = uStack_668 >> 0x20;
          uStack_668 = uStack_668 & 0xffffffff00000000;
          if ((int)uVar50 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&FStack_670,0,(int *)((longlong)&uStack_668 + 4));
          }
        }
        else {
          DestructItems<FKey,int>((FKey *)FStack_670.Data,(int)uStack_668);
          uStack_668 = uStack_668 & 0xffffffff00000000;
        }
        DestructItems<FEnhancedActionKeyMapping,int>
                  ((FEnhancedActionKeyMapping *)TStack_580.AllocatorInstance.Data,
                   TStack_580.ArrayNum);
        if ((FEnhancedActionKeyMapping *)TStack_580.AllocatorInstance.Data !=
            (FEnhancedActionKeyMapping *)0x0) {
          FMemory::Free(TStack_580.AllocatorInstance.Data);
        }
        DestructItems<FKey,int>((FKey *)FStack_670.Data,(int)uStack_668);
        this = pIStack_620;
        pTVar63 = pTStack_570;
        uVar61 = uStack_640;
        if ((FKey *)FStack_670.Data != (FKey *)0x0) {
          FMemory::Free(FStack_670.Data);
          this = pIStack_620;
          pTVar63 = pTStack_570;
          uVar61 = uStack_640;
        }
      }
      TStack_3b0.UnvisitedBitMask = TStack_3b0.UnvisitedBitMask & ~TStack_3b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b0);
      pUVar37 = pUStack_590;
      pFVar54 = pFStack_568;
    }
    InjectChordBlockers(this,&TStack_618);
    pUVar32 = pUStack_5f8;
    UPlayerInput::ForceRebuildingKeyMaps((UPlayerInput *)pUStack_5f8,false);
    this_00 = &pUVar32->ActionInstanceData;
    if (this->MappingRebuildPending == RebuildWithFlush) {
      if (*(int *)&(pUVar32->ActionInstanceData).field_0x48 < 2) {
        TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
                          *)this_00);
        TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,0);
      }
      else {
        TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,0);
        *(undefined4 *)&(pUVar32->ActionInstanceData).field_0x48 = 1;
        TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
    else {
      iStack_15c = 0x80;
      puVar4 = &(pUVar32->ActionInstanceData).field_0x10;
      auStack_188._0_8_ = (FScriptContainerElement *)0x0;
      auStack_188._8_8_ = 0;
      FStack_168 = (ForElementType<unsigned_int>)0x0;
      iStack_160 = 0;
      iStack_154 = 0;
      FStack_148 = (ForElementType<FSetElementId>)0x0;
      iStack_140 = 0;
      iStack_158 = -1;
      TStack_4e0._padding_._0_4_ = 0;
      TStack_4e0._padding_._4_4_ = 1;
      TStack_4e0.UnvisitedBitMask = 0xffffffff;
      TStack_4e0.CurrentBitIndex = 0;
      TStack_4e0.BaseBitIndex = 0;
      TStack_4e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
      if (*(int *)&(pUVar32->ActionInstanceData).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4e0);
      }
      TStack_5d0._padding_ = CONCAT44(TStack_4e0._padding_._4_4_,(undefined4)TStack_4e0._padding_);
      TStack_5d0._16_8_ = CONCAT44(TStack_4e0.CurrentBitIndex,TStack_4e0.UnvisitedBitMask);
      TStack_5d0._24_8_ = CONCAT44(TStack_4e0._28_4_,TStack_4e0.BaseBitIndex);
      iStack_530 = *(int *)&(pUVar32->ActionInstanceData).field_0x8 -
                   *(int *)&(pUVar32->ActionInstanceData).field_0x34;
      pTStack_548 = TStack_4e0.Array;
      uStack_5ac = uStack_52c;
      iStack_5b0 = iStack_530;
      TStack_5d0.Array = TStack_4e0.Array;
      pTStack_5d8 = this_00;
      pTStack_558 = this_00;
      lStack_550 = TStack_5d0._padding_;
      uStack_540 = TStack_5d0._16_8_;
      lStack_538 = TStack_5d0._24_8_;
      pTVar35 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&TStack_1a8,(TBitArray<FDefaultBitArrayAllocator> *)puVar4,
                           *(int *)&(pUVar32->ActionInstanceData).field_0x28);
      lStack_550 = pTVar35->_padding_;
      pTVar19 = pTVar35->Array;
      uVar18._0_4_ = pTVar35->UnvisitedBitMask;
      uVar18._4_4_ = pTVar35->CurrentBitIndex;
      lStack_538 = *(longlong *)&pTVar35->BaseBitIndex;
      pTStack_548 = pTVar19;
      uStack_540 = uVar18;
      while( true ) {
        pTVar23 = pTStack_5d8;
        if (*(int *)(&pTStack_5d8->field_0x0 + 8) - *(int *)(&pTStack_5d8->field_0x0 + 0x34) !=
            iStack_5b0) {
          uStack_644 = 0;
          `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_644);
        }
        if (((TStack_5d0.CurrentBitIndex == uVar18._4_4_) && (TStack_5d0.Array == pTVar19)) &&
           (pTVar23 == this_00)) break;
        uStack_460 = *(undefined8 *)
                      ((longlong)TStack_5d0.CurrentBitIndex * 0x70 +
                      *(longlong *)&pTVar23->field_0x0);
        TSet<UInputAction_const_*,DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator>::
        Emplace<UInputAction_const_*>
                  ((TSet<UInputAction_const_*,DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator>
                    *)auStack_188,(UInputAction **)auStack_494,(bool *)&uStack_460);
        TStack_5d0.UnvisitedBitMask = TStack_5d0.UnvisitedBitMask & ~TStack_5d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5d0);
      }
      uStack_624 = (pUVar32->EnhancedActionMappings).ArrayNum;
      uVar50 = (ulonglong)(int)uStack_624;
      pFVar56 = (pUVar32->EnhancedActionMappings).AllocatorInstance.Data;
      pFVar57 = pFVar56 + 0x18;
      pFStack_5a0 = (FEnhancedActionKeyMapping *)(pFVar56 + uVar50 * 0x50);
      while( true ) {
        pFVar62 = pFStack_5a0;
        if ((pUVar32->EnhancedActionMappings).ArrayNum != (int)uVar50) {
          auStack_643[0] = 0;
          `TCheckedPointerIterator<FEnhancedActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStack_643);
        }
        pFVar5 = (FEnhancedActionKeyMapping *)(pFVar57 + -0x18);
        if (pFVar5 == pFVar62) break;
        uVar50 = *(ulonglong *)(pFVar57 + 8);
        if (auStack_188._8_4_ != iStack_154) {
          uVar61 = ((uint)(uVar50 >> 0x14) & 0xffff ^ (uint)(uVar50 >> 4)) * -0x7a143595;
          uVar61 = (uVar61 >> 0xd ^ uVar61) * -0x3d4d51cb;
          FVar48 = (ForElementType<FSetElementId>)auStack_150;
          if (FStack_148 != (ForElementType<FSetElementId>)0x0) {
            FVar48 = FStack_148;
          }
          uVar61 = *(uint *)((longlong)FVar48 +
                            (longlong)(int)(iStack_140 - 1U & (uVar61 >> 0x10 ^ uVar61)) * 4);
          if (uVar61 != 0xffffffff) {
LAB_14a6ee840:
            lVar46 = (longlong)(int)uVar61;
            if (*(ulonglong *)(auStack_188._0_8_ + lVar46 * 0x10) != uVar50)
            goto code_r0x00014a6ee853;
            if (((int)uVar61 < 0) || (iStack_160 <= (int)uVar61)) {
LAB_14a6ee89d:
              bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Elements.IsValidIndex(ElementIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                  ,0x2ab,
                                  L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
              if (bVar26) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
            }
            else {
              FVar47 = (ForElementType<unsigned_int>)((longlong)auStack_188 + 0x10);
              if (FStack_168 != (ForElementType<unsigned_int>)0x0) {
                FVar47 = FStack_168;
              }
              uVar30 = uVar61;
              if ((int)uVar61 < 0) {
                uVar30 = uVar61 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar47 + (longlong)((int)uVar30 >> 5) * 4) >> (uVar61 & 0x1f)
                  & 1) == 0) goto LAB_14a6ee89d;
            }
            uVar18 = auStack_188._0_8_;
            FVar48 = (ForElementType<FSetElementId>)auStack_150;
            if (FStack_148 != (ForElementType<FSetElementId>)0x0) {
              FVar48 = FStack_148;
            }
            pFVar56 = (FScriptContainerElement *)
                      ((longlong)FVar48 +
                      (longlong)*(int *)(auStack_188._0_8_ + lVar46 * 0x10 + 0xc) * 4);
            while( true ) {
              uVar30 = *(uint *)pFVar56;
              if ((uVar30 == 0xffffffff) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("NextElementIndex != INDEX_NONE",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                      ,0x2b5,L"Corrupt hash"), bVar26)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              if (uVar30 == uVar61) break;
              pFVar56 = (FScriptContainerElement *)
                        (auStack_188._0_8_ + (longlong)(int)uVar30 * 0x10 + 8);
            }
            *(uint *)pFVar56 = *(uint *)(uVar18 + lVar46 * 0x10 + 8);
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)auStack_188,uVar61,1);
            pUVar32 = pUStack_5f8;
          }
        }
LAB_14a6ee965:
        if ((pIStack_620->bIgnoreAllPressedKeysUntilReleaseOnRebuild != false) &&
           (*(char *)(*(longlong *)(pFVar57 + 8) + 0x48) == '\0')) {
          FStack_358.KeyName = *(FName *)(pFVar57 + 0x10);
          pTVar13 = *(TReferenceControllerBase<1> **)(pFVar57 + 0x20);
          FStack_358.KeyDetails.Object = *(FKeyDetails **)(pFVar57 + 0x18);
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
          }
          FStack_358.KeyDetails.SharedReferenceCount.ReferenceController = pTVar13;
          pFVar41 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                    ::Find((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                            *)&pUVar32->_padding_,&FStack_358);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          if ((pFVar41 != (FKeyState *)0x0) && (pFVar41->bDown != 0)) {
            pFVar57[0x28] = (FScriptContainerElement)((byte)pFVar57[0x28] | 1);
          }
        }
        FVar52.Data = FStack_638.Data;
        pFVar62 = (FEnhancedActionKeyMapping *)(FStack_638.Data + (longlong)iStack_630 * 0x50);
        FVar51.Data = FStack_638.Data;
        if ((FEnhancedActionKeyMapping *)FStack_638.Data == pFVar62) {
LAB_14a6eeda7:
          pFVar57 = pFVar57 + 0x50;
          uVar50 = (ulonglong)uStack_624;
          pUVar32 = pUStack_5f8;
        }
        else {
          do {
            bVar26 = FEnhancedActionKeyMapping::Equals<1>
                               (pFVar5,(FEnhancedActionKeyMapping *)FVar51.Data);
            if (bVar26) {
              uVar61 = (uint)(((longlong)FVar51.Data - (longlong)FVar52.Data) / 0x50);
              if (uVar61 != 0xffffffff) {
                if (bRespectIMCPriorityForTriggers != false) {
                  uVar30 = 0;
                  if ((int)uVar61 < iStack_630) {
                    uVar30 = ~uVar61 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar26)) {
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                  pFVar62 = (FEnhancedActionKeyMapping *)
                            (FStack_638.Data + (longlong)(int)uVar61 * 0x50);
                  if (pFVar62 != pFVar5) {
                    pFVar56 = (pFVar62->Triggers).AllocatorInstance.Data;
                    if (pFVar56 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar56);
                    }
                    (pFVar62->Triggers).AllocatorInstance.Data =
                         (pFVar5->Triggers).AllocatorInstance.Data;
                    (pFVar5->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    (pFVar62->Triggers).ArrayNum = *(int *)(pFVar57 + -0x10);
                    (pFVar62->Triggers).ArrayMax = *(int *)(pFVar57 + -0xc);
                    *(undefined8 *)(pFVar57 + -0x10) = 0;
                  }
                  uVar30 = 0;
                  if ((int)uVar61 < iStack_630) {
                    uVar30 = ~uVar61 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar26)) {
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                  pFVar56 = pFVar57 + -8;
                  pFVar59 = FStack_638.Data + (longlong)(int)uVar61 * 0x50 + 0x10;
                  if (pFVar59 != pFVar56) {
                    if (*(void **)pFVar59 != (void *)0x0) {
                      FMemory::Free(*(void **)pFVar59);
                    }
                    *(undefined8 *)pFVar59 = *(undefined8 *)pFVar56;
                    *(undefined8 *)pFVar56 = 0;
                    *(int *)(pFVar59 + 8) = *(int *)pFVar57;
                    *(int *)(pFVar59 + 0xc) = *(int *)(pFVar57 + 4);
                    *(undefined8 *)pFVar57 = 0;
                  }
                }
                uVar30 = 0;
                if ((int)uVar61 < iStack_630) {
                  uVar30 = ~uVar61 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pFStack_5a8 = (FEnhancedActionKeyMapping *)(longlong)(int)uVar61;
                lVar46 = (longlong)pFStack_5a8 * 0x50;
                pFVar62 = (FEnhancedActionKeyMapping *)(FStack_638.Data + lVar46);
                if (pFVar5 != pFVar62) {
                  pFVar56 = (pFVar5->Triggers).AllocatorInstance.Data;
                  if (pFVar56 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar56);
                  }
                  (pFVar5->Triggers).AllocatorInstance.Data =
                       (pFVar62->Triggers).AllocatorInstance.Data;
                  (pFVar62->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  *(int *)(pFVar57 + -0x10) = (pFVar62->Triggers).ArrayNum;
                  *(int *)(pFVar57 + -0xc) = (pFVar62->Triggers).ArrayMax;
                  (pFVar62->Triggers).ArrayNum = 0;
                  (pFVar62->Triggers).ArrayMax = 0;
                }
                pTVar3 = &pFVar62->Modifiers;
                pFVar56 = pFVar57 + -8;
                if ((TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *)pFVar56 !=
                    pTVar3) {
                  if (*(void **)pFVar56 != (void *)0x0) {
                    FMemory::Free(*(void **)pFVar56);
                  }
                  *(FScriptContainerElement **)pFVar56 = (pTVar3->AllocatorInstance).Data;
                  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  *(int *)pFVar57 = (pFVar62->Modifiers).ArrayNum;
                  *(int *)(pFVar57 + 4) = (pFVar62->Modifiers).ArrayMax;
                  (pFVar62->Modifiers).ArrayNum = 0;
                  (pFVar62->Modifiers).ArrayMax = 0;
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar15 = (pFVar62->Action).field0_0x0.DebugPtr, pUVar15 != (UInputAction *)0x0)
                   ) {
                  UE::GC::MarkAsReachable((UObject *)pUVar15);
                }
                pTVar6 = &(pFVar62->Key).KeyDetails;
                *(TObjectPtr<UInputAction_const_>_u_0 *)(pFVar57 + 8) = (pFVar62->Action).field0_0x0
                ;
                *(FName *)(pFVar57 + 0x10) = (pFVar62->Key).KeyName;
                if ((TSharedPtr<FKeyDetails,1> *)(pFVar57 + 0x18) != pTVar6) {
                  *(FKeyDetails **)(pFVar57 + 0x18) = pTVar6->Object;
                  pTVar6->Object = (FKeyDetails *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            ((FSharedReferencer<1> *)(pFVar57 + 0x20),
                             &(pFVar62->Key).KeyDetails.SharedReferenceCount);
                }
                FVar44 = (FScriptContainerElement)
                         (((byte)pFVar57[0x28] ^ pFVar62->bShouldBeIgnored) & 1 ^
                         (byte)pFVar57[0x28]);
                pFVar57[0x28] = FVar44;
                pFVar57[0x28] =
                     (FScriptContainerElement)
                     (((byte)FVar44 ^ pFVar62->field_0x40) & 2 ^ (byte)FVar44);
                pFVar57[0x29] = (FScriptContainerElement)pFVar62->SettingBehavior;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar55 = (pFVar62->PlayerMappableKeySettings).field0_0x0.DebugPtr,
                   pUVar55 != (UPlayerMappableKeySettings *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar55);
                }
                *(TObjectPtr<UPlayerMappableKeySettings>_u_0 *)(pFVar57 + 0x30) =
                     (pFVar62->PlayerMappableKeySettings).field0_0x0;
                uVar30 = 0;
                if ((int)uVar61 < iStack_630) {
                  uVar30 = ~uVar61 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                FVar52.Data = FStack_638.Data;
                pFVar56 = FStack_638.Data + lVar46;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (*(TReferenceControllerBase<1> **)(FStack_638.Data + lVar46 + 0x38));
                if (*(void **)(pFVar56 + 0x10) != (void *)0x0) {
                  FMemory::Free(*(void **)(pFVar56 + 0x10));
                }
                if (*(void **)&pFVar56->field_0x0 != (void *)0x0) {
                  FMemory::Free(*(void **)&pFVar56->field_0x0);
                }
                iVar29 = (iStack_630 - uVar61) + -1;
                if (1 < iVar29) {
                  iVar29 = 1;
                }
                if (iVar29 != 0) {
                  memmove(pFVar56,FVar52.Data + (longlong)(iStack_630 - iVar29) * 0x50,
                          (longlong)iVar29 * 0x50);
                }
                iStack_630 = iStack_630 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x50,8,&FStack_638,iStack_630,&iStack_62c);
              }
              goto LAB_14a6eeda7;
            }
            FVar51.Data = FVar51.Data + 0x50;
          } while ((FEnhancedActionKeyMapping *)FVar51.Data != pFVar62);
          pFVar57 = pFVar57 + 0x50;
          uVar50 = (ulonglong)uStack_624;
          pUVar32 = pUStack_5f8;
        }
      }
      UEnhancedPlayerInput::NotifyInputActionsUnmapped
                (pUVar32,(TSet<UInputAction_const_*,DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator>
                          *)auStack_188);
      iStack_140 = 0;
      if (FStack_148 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_148);
      }
      TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auStack_188);
      this = pIStack_620;
    }
    pFVar56 = (pUVar32->EnhancedActionMappings).AllocatorInstance.Data;
    iVar29 = (pUVar32->EnhancedActionMappings).ArrayNum;
    pFVar57 = pFVar56 + 0x20;
    while( true ) {
      if ((pUVar32->EnhancedActionMappings).ArrayNum != iVar29) {
        `TCheckedPointerIterator<FEnhancedActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&uStack_608);
      }
      if (pFVar57 + -0x20 == pFVar56 + (longlong)iVar29 * 0x50) break;
      pUVar11 = *(UObject **)pFVar57;
      if (pUVar11 != (UObject *)0x0) {
        pUStack_458 = pUVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar11);
        }
        pFVar42 = UEnhancedPlayerInput::FindOrAddActionEventData
                            (pUVar32,(TObjectPtr<UInputAction_const_>)&pUStack_458);
        TStack_238._s_0.X = (pFVar42->Value).Value.field0_0x0._s_0.X;
        TStack_238._s_0.Y = (pFVar42->Value).Value.field0_0x0._s_0.Y;
        TStack_238._s_0.Z = (pFVar42->Value).Value.field0_0x0._s_0.Z;
        uStack_220 = *(undefined8 *)&(pFVar42->Value).ValueType;
        pFVar43 = UEnhancedPlayerInput::ApplyModifiers
                            (pUVar32,&FStack_1c8,
                             (TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *)
                             (pFVar57 + -0x10),(FInputActionValue *)&TStack_238._s_0,0.0);
        dVar20 = (pFVar43->Value).field0_0x0._s_0.Y;
        (pFVar42->Value).Value.field0_0x0._s_0.X = (pFVar43->Value).field0_0x0._s_0.X;
        (pFVar42->Value).Value.field0_0x0._s_0.Y = dVar20;
        EVar21 = pFVar43->ValueType;
        uVar22 = *(undefined7 *)&pFVar43->field_0x19;
        (pFVar42->Value).Value.field0_0x0._s_0.Z = (pFVar43->Value).field0_0x0._s_0.Z;
        (pFVar42->Value).ValueType = EVar21;
        *(undefined7 *)&(pFVar42->Value).field_0x19 = uVar22;
      }
      pFVar57 = pFVar57 + 0x50;
    }
    this->MappingRebuildPending = None;
    this->bIgnoreAllPressedKeysUntilReleaseOnRebuild = true;
    this->bControlMappingsRebuiltThisTick = true;
    DestructItems<FKey,int>((FKey *)FStack_660.Data,(uint)uStack_658);
    if ((FKey *)FStack_660.Data != (FKey *)0x0) {
      FMemory::Free(FStack_660.Data);
    }
    if (TStack_618.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_618.AllocatorInstance.Data);
    }
    iStack_f0 = 0;
    if (FStack_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_f8);
    }
    TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)auStack_138);
    iStack_50 = 0;
    if (FStack_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_58);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)auStack_98);
    DestructItems<FEnhancedActionKeyMapping,int>
              ((FEnhancedActionKeyMapping *)FStack_638.Data,iStack_630);
    if ((FEnhancedActionKeyMapping *)FStack_638.Data != (FEnhancedActionKeyMapping *)0x0) {
      FMemory::Free(FStack_638.Data);
    }
  }
  return;
code_r0x00014a6ee853:
  uVar61 = *(uint *)(auStack_188._0_8_ + lVar46 * 0x10 + 8);
  if (uVar61 == 0xffffffff) goto LAB_14a6ee965;
  goto LAB_14a6ee840;
}

// SetInputMode @ 14a6f6460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::SetInputMode
          (IEnhancedInputSubsystemInterface *this,FGameplayTagContainer *param_1,
          FModifyContextOptions *param_2)

{
  UClass *this_00;
  longlong lVar1;
  FString local_18;
  
  if (2 < (byte)LogEnhancedInput._0_1_) {
    this_00 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    if ((*(byte *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 0x10) == 0) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  lVar1 = (**(code **)(this->_padding_ + 0x10))(this);
  if (lVar1 == 0) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      FGameplayTagContainer::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    FGameplayTagContainer::operator=((FGameplayTagContainer *)(lVar1 + 0x638),param_1);
    (**(code **)(this->_padding_ + 0xd8))(this,param_2,1);
  }
  return;
}

// ShowDebugActionModifiers @ 14a6f6780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::ShowDebugActionModifiers
          (IEnhancedInputSubsystemInterface *this,UCanvas *param_1,UInputAction *param_2)

{
  FDisplayDebugManager *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FInputActionInstance *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  void *pvVar7;
  UEnhancedPlayerInput *pUVar8;
  FInputActionValue *pFVar9;
  longlong lVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  UObject *this_01;
  UObject *this_02;
  UFunction *pUVar13;
  longlong *plVar14;
  undefined6 extraout_var;
  FUObjectItem *pFVar15;
  undefined6 extraout_var_00;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  uint uVar20;
  uint uVar21;
  UTexture2D *pUVar22;
  int iVar23;
  UObject *pUVar24;
  int iVar25;
  ForAnyElementType FVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  undefined1 local_res8 [8];
  UCanvas *local_res10;
  UInputAction *local_res18;
  uint local_res20;
  int *in_stack_fffffffffffffc18;
  double local_3b8;
  double local_3b0;
  FInputActionInstance *local_3a8;
  int local_3a0;
  FScriptContainerElement *local_398;
  undefined1 local_390 [12];
  int local_384;
  FName local_380;
  FName local_378;
  longlong local_370;
  longlong local_368;
  double local_360;
  double dStack_358;
  double local_350;
  UInputAction *local_348;
  UObject *local_340;
  UObject *local_338;
  FScriptContainerElement *local_330;
  FInputActionInstance *local_328;
  FDisplayDebugManager *local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  EInputActionValueType EStack_300;
  undefined7 uStack_2ff;
  double *local_2f8;
  UInputAction **local_2f0;
  double *local_2e8;
  FString local_2e0;
  FInputActionInstance **local_2d0;
  longlong *local_2c8;
  FString local_2c0;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  UObject **local_290;
  longlong *local_288;
  double local_280;
  double dStack_278;
  undefined8 local_270;
  EInputActionValueType EStack_268;
  undefined7 uStack_267;
  UCanvas **local_260;
  double *local_258;
  undefined8 *local_250;
  FInputActionInstance **local_248;
  double *local_240;
  FDisplayDebugManager *local_238;
  FDisplayDebugManager *local_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  UEnhancedPlayerInput *local_1d8;
  double local_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  UEnhancedPlayerInput *local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  FInputActionValue local_f8;
  FInputActionValue local_d8 [4];
  
  pFVar1 = &param_1->DisplayDebugManager;
  local_res10 = param_1;
  local_res18 = param_2;
  local_320 = pFVar1;
  pUVar8 = (UEnhancedPlayerInput *)(**(code **)(this->_padding_ + 0x10))();
  local_348 = local_res18;
  if (pUVar8 == (UEnhancedPlayerInput *)0x0) {
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UInputAction *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_348 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_348);
  }
  local_3a8 = TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
              ::Find((TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                      *)&pUVar8->ActionInstanceData,(TObjectPtr<UInputAction_const_>)&local_348);
  if (local_3a8 == (FInputActionInstance *)0x0) {
    return;
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar10 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`IEnhancedInputSubsystemInterface::ShowDebugActionModifiers'::__l2::
           _dynamic_atexit_destructor_for__Modifiers__);
    _Init_thread_footer(&::_TSS0);
  }
  GetAllRelevantInputModifiersForDebug(pUVar8,local_3a8,&Modifiers);
  this_00 = local_3a8;
  if (Modifiers.ArrayNum < 1) {
    return;
  }
  pFVar9 = FInputActionInstance::GetValue(local_3a8,&local_f8);
  if (pFVar9->ValueType != Axis1D) {
    pFVar9 = FInputActionInstance::GetValue(this_00,local_d8);
    bVar6 = false;
    if (pFVar9->ValueType != Boolean) goto LAB_14a6f68e5;
  }
  bVar6 = true;
LAB_14a6f68e5:
  iVar16 = 0x40;
  iVar23 = 0x40;
  if (bVar6) {
    iVar23 = 1;
  }
  local_3b8 = __real_4050000000000000;
  local_1e8 = ___xmm_40100000000000004030000000000000;
  uStack_1e0 = _UNK_1521de288;
  local_2a0 = __real_4050000000000000;
  if (bVar6) {
    iVar16 = 0x10;
  }
  local_3b0 = (double)iVar23;
  dVar30 = (double)(param_1->DisplayDebugManager).CurrentPos.field0_0x0._s_0.Y;
  local_298 = (double)iVar16;
  local_2a8 = dVar30 + __real_4010000000000000;
  local_384 = (int)((double)((param_1->DisplayDebugManager).MaxCharHeight + __real_41000000) +
                   dVar30 + local_298);
  local_260 = &local_res10;
  local_258 = &local_2b0;
  local_250 = &local_1e8;
  local_248 = &local_3a8;
  local_240 = &local_2a0;
  local_2b0 = (double)(param_1->DisplayDebugManager).CurrentPos.field0_0x0._s_0.X +
              __real_4030000000000000;
  local_238 = pFVar1;
  local_230 = pFVar1;
  if ((*(int *)(lVar10 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`IEnhancedInputSubsystemInterface::ShowDebugActionModifiers'::__l8::
           _dynamic_atexit_destructor_for__RunningSampleData__);
    _Init_thread_footer(&::_TSS1);
  }
  uVar20 = (uint)(local_3b0 * local_3b8);
  if (RunningSampleData.ArrayNum < (int)uVar20) {
    in_stack_fffffffffffffc18 = &RunningSampleData.ArrayNum;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar20 - RunningSampleData.ArrayNum,&RunningSampleData.AllocatorInstance,
               &RunningSampleData.ArrayNum,&RunningSampleData.ArrayMax);
  }
  else {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if ((int)uVar20 < RunningSampleData.ArrayNum) {
      uVar21 = RunningSampleData.ArrayNum - uVar20;
      if ((int)(uVar21 | uVar20) < 0) {
        in_stack_fffffffffffffc18 = (int *)(longlong)(int)uVar20;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar21 != 0) {
        iVar23 = (RunningSampleData.ArrayNum - uVar21) - uVar20;
        if (iVar23 != 0) {
          memmove(RunningSampleData.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x18,
                  RunningSampleData.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x18 +
                  (longlong)(int)uVar21 * 0x18,(longlong)iVar23 * 0x18);
        }
        RunningSampleData.ArrayNum = RunningSampleData.ArrayNum - uVar21;
      }
    }
  }
  dVar30 = __real_3ff0000000000000;
  iVar23 = 0;
  if (0.0 < local_3b0) {
    dVar33 = 0.0;
    iVar16 = RunningSampleData.ArrayNum;
    do {
      iVar25 = 0;
      if (0.0 < local_3b8) {
        dVar29 = 0.0;
        do {
          dVar27 = local_3b0 - dVar30;
          dVar34 = dVar29 + dVar29;
          dVar28 = local_3b8 - dVar30;
          uVar21 = (uint)(dVar33 * local_3b8 + dVar29);
          uVar20 = 0;
          if ((int)uVar21 < iVar16) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if (uVar20 == 0) {
            in_stack_fffffffffffffc18 = (int *)(longlong)(int)uVar21;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FVar26.Data = RunningSampleData.AllocatorInstance.Data;
          iVar25 = iVar25 + 1;
          lVar10 = (longlong)(int)uVar21;
          dVar29 = (double)iVar25;
          *(double *)(RunningSampleData.AllocatorInstance.Data + lVar10 * 0x18) =
               dVar34 / dVar28 - dVar30;
          *(double *)(FVar26.Data + lVar10 * 0x18 + 8) = (dVar33 + dVar33) / dVar27 - dVar30;
          *(undefined8 *)(FVar26.Data + lVar10 * 0x18 + 0x10) = 0;
          iVar16 = RunningSampleData.ArrayNum;
        } while (dVar29 < local_3b8);
      }
      iVar23 = iVar23 + 1;
      dVar33 = (double)iVar23;
    } while (dVar33 < local_3b0);
  }
  iVar23 = 0;
  uVar17 = (ulonglong)Modifiers.ArrayNum;
  local_2f8 = &local_3b8;
  local_2f0 = &local_res18;
  local_390._4_4_ = Modifiers.ArrayNum;
  local_2e8 = &local_3b8;
  local_3a0 = 0;
  local_330 = Modifiers.AllocatorInstance.Data + uVar17 * 8;
  FVar26.Data = Modifiers.AllocatorInstance.Data;
  while( true ) {
    pFVar2 = local_330;
    plVar14 = (longlong *)0x0;
    local_398 = FVar26.Data;
    if (Modifiers.ArrayNum != (int)uVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UInputModifier_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar26.Data == pFVar2) break;
    pUVar24 = *(UObject **)FVar26.Data;
    local_340 = pUVar24;
    if (CachedModifierVisualizations._8_4_ != CachedModifierVisualizations._52_4_) {
      lVar10 = 0x154caf4f8;
      if (CachedModifierVisualizations._64_8_ != 0) {
        lVar10 = CachedModifierVisualizations._64_8_;
      }
      iVar16 = *(int *)(lVar10 + ((ulonglong)
                                  (&pUVar24->field_0x0 + ((ulonglong)pUVar24 >> 0x20) * 0x17) &
                                 (ulonglong)(CachedModifierVisualizations._72_4_ - 1)) * 4);
      while (iVar16 != -1) {
        lVar10 = CachedModifierVisualizations._0_8_ + (longlong)iVar16 * 0x18;
        if (*(UObject **)(CachedModifierVisualizations._0_8_ + (longlong)iVar16 * 0x18) == pUVar24)
        {
          plVar18 = (longlong *)(lVar10 + 8);
          if (lVar10 == 0) {
            plVar18 = plVar14;
          }
          if ((plVar18 != (longlong *)0x0) &&
             (pUVar22 = (UTexture2D *)*plVar18, pUVar22 != (UTexture2D *)0x0)) goto LAB_14a6f73ce;
          break;
        }
        iVar16 = *(int *)(lVar10 + 0x10);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      atexit(`IEnhancedInputSubsystemInterface::ShowDebugActionModifiers'::__l19::
             _dynamic_atexit_destructor_for__SampleData__);
      _Init_thread_footer(&::_TSS3);
    }
    uVar20 = (uint)(local_3b0 * local_3b8);
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if (SampleData.ArrayMax < (int)uVar20) {
      in_stack_fffffffffffffc18 =
           (int *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffc18 >> 0x20),SampleData.ArrayNum);
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar20,&SampleData.AllocatorInstance,SampleData.ArrayNum,
                 &SampleData.ArrayMax);
    }
    SampleData.ArrayNum = 0;
    if ((SampleData.ArrayMax < 0) && (SampleData.ArrayMax != 0)) {
      in_stack_fffffffffffffc18 = (int *)((ulonglong)in_stack_fffffffffffffc18 & 0xffffffff00000000)
      ;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&SampleData.AllocatorInstance,0,&SampleData.ArrayMax);
    }
    local_380.ComparisonIndex.Value = 0;
    local_380.Number = 0;
    pUVar11 = GetTransientPackage();
    pUVar12 = UInputModifier::StaticClass();
    this_01 = DuplicateObject_Internal(pUVar12,pUVar24,(UObject *)pUVar11,local_380);
    local_378.ComparisonIndex.Value = 0;
    local_378.Number = 0;
    pUVar11 = GetTransientPackage();
    pUVar12 = UInputModifier::StaticClass();
    this_02 = DuplicateObject_Internal(pUVar12,pUVar24,(UObject *)pUVar11,local_378);
    local_res20 = 0;
    if (0.0 < local_3b0) {
      dVar34 = 0.0;
      dVar33 = local_3b8;
      dVar29 = local_3b0;
      do {
        iVar23 = 0;
        uVar20 = (uint)plVar14;
        if (0.0 < dVar33) {
          dVar27 = 0.0;
          do {
            local_270 = 0;
            EStack_268 = local_res18->ValueType;
            dVar28 = (dVar27 + dVar27) / (dVar33 - dVar30) - dVar30;
            dVar33 = (dVar34 + dVar34) / (dVar29 - dVar30) - dVar30;
            if ((EStack_268 == Boolean) || (EStack_268 == Axis1D)) {
              dVar33 = 0.0;
            }
            pUVar13 = UObject::FindFunctionChecked(this_01,NAME_UInputModifier_ModifyRaw);
            pUVar12 = UField::GetOwnerClass((UField *)pUVar13);
            local_280 = dVar28;
            dStack_278 = dVar33;
            if ((pUVar12->ClassFlags & CLASS_Native) == CLASS_None) {
              uStack_190 = 0;
              local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              dStack_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_1b0 = 0;
              uStack_1b8 = CONCAT71(uStack_267,EStack_268);
              local_1c0 = local_270;
              local_1d8 = pUVar8;
              local_1d0 = dVar28;
              dStack_1c8 = dVar33;
              (**(code **)(*(longlong *)this_01 + 0x260))(this_01,pUVar13,&local_1d8);
              uStack_210 = CONCAT71(uStack_18f,uStack_190);
              local_228 = local_1a8;
              dStack_220 = dStack_1a0;
              local_218 = local_198;
            }
            else {
              in_stack_fffffffffffffc18 =
                   (int *)((ulonglong)in_stack_fffffffffffffc18 & 0xffffffff00000000);
              uStack_120 = CONCAT71(uStack_267,EStack_268);
              local_128 = local_270;
              local_138 = dVar28;
              dStack_130 = dVar33;
              (**(code **)(*(longlong *)this_01 + 0x2b0))
                        (this_01,&local_228,pUVar8,&local_138,in_stack_fffffffffffffc18);
            }
            local_360 = local_228;
            dStack_358 = dStack_220;
            local_350 = local_218;
            if ((SampleData.AllocatorInstance.Data <= (FScriptContainerElement *)&local_360) &&
               ((FScriptContainerElement *)&local_360 <
                SampleData.AllocatorInstance.Data + (longlong)SampleData.ArrayMax * 0x18)) {
              in_stack_fffffffffffffc18 = (int *)&local_360;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (SampleData.ArrayNum == SampleData.ArrayMax) {
              SampleData.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&SampleData.AllocatorInstance,&SampleData.ArrayMax);
            }
            FVar26.Data = SampleData.AllocatorInstance.Data;
            lVar10 = (longlong)SampleData.ArrayNum;
            pFVar2 = SampleData.AllocatorInstance.Data + lVar10 * 0x18;
            SampleData.ArrayNum = SampleData.ArrayNum + 1;
            *(double *)pFVar2 = local_360;
            *(double *)(pFVar2 + 8) = dStack_358;
            *(double *)(FVar26.Data + lVar10 * 0x18 + 0x10) = local_350;
            uVar21 = (uint)(dVar34 * local_3b8 + dVar27);
            uVar20 = 0;
            if ((int)uVar21 < RunningSampleData.ArrayNum) {
              uVar20 = ~uVar21 >> 0x1f;
            }
            if (uVar20 == 0) {
              in_stack_fffffffffffffc18 = (int *)(longlong)(int)uVar21;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FVar26.Data = RunningSampleData.AllocatorInstance.Data;
            lVar10 = (longlong)(int)uVar21;
            pFVar2 = RunningSampleData.AllocatorInstance.Data + lVar10 * 0x18;
            uVar31 = *(undefined4 *)pFVar2;
            uVar32 = *(undefined4 *)(pFVar2 + 4);
            uStack_310 = *(undefined4 *)(pFVar2 + 8);
            uStack_30c = *(undefined4 *)(pFVar2 + 0xc);
            local_308 = *(undefined8 *)
                         (RunningSampleData.AllocatorInstance.Data + lVar10 * 0x18 + 0x10);
            EStack_300 = local_res18->ValueType;
            if ((EStack_300 == Boolean) || (EStack_300 == Axis1D)) {
              uVar31 = (undefined4)*(undefined8 *)pFVar2;
              uVar32 = (undefined4)((ulonglong)*(undefined8 *)pFVar2 >> 0x20);
              local_318 = SUB124(*(undefined1 (*) [12])pFVar2,0);
              uStack_314 = SUB124(*(undefined1 (*) [12])pFVar2,4);
              uStack_310 = 0;
              uStack_30c = 0;
LAB_14a6f71d9:
              local_308 = 0;
            }
            else {
              local_318 = uVar31;
              uStack_314 = uVar32;
              if (EStack_300 == Axis2D) goto LAB_14a6f71d9;
            }
            uVar5 = uStack_30c;
            uVar4 = uStack_310;
            pUVar13 = UObject::FindFunctionChecked(this_02,NAME_UInputModifier_ModifyRaw);
            pUVar12 = UField::GetOwnerClass((UField *)pUVar13);
            if ((pUVar12->ClassFlags & CLASS_Native) == CLASS_None) {
              uStack_140 = 0;
              local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              dStack_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uStack_168 = CONCAT71(uStack_2ff,EStack_300);
              local_160 = 0;
              local_170 = local_308;
              local_188 = pUVar8;
              local_180 = uVar31;
              uStack_17c = uVar32;
              uStack_178 = uVar4;
              uStack_174 = uVar5;
              (**(code **)(*(longlong *)this_02 + 0x260))(this_02,pUVar13,&local_188);
              uStack_1f0 = CONCAT71(uStack_13f,uStack_140);
              local_208 = local_158;
              dStack_200 = dStack_150;
              local_1f8 = local_148;
            }
            else {
              uStack_100 = CONCAT71(uStack_2ff,EStack_300);
              in_stack_fffffffffffffc18 =
                   (int *)((ulonglong)in_stack_fffffffffffffc18 & 0xffffffff00000000);
              local_108 = local_308;
              local_118 = uVar31;
              uStack_114 = uVar32;
              uStack_110 = uVar4;
              uStack_10c = uVar5;
              (**(code **)(*(longlong *)this_02 + 0x2b0))
                        (this_02,&local_208,pUVar8,&local_118,in_stack_fffffffffffffc18);
            }
            pFVar2 = FVar26.Data + lVar10 * 0x18;
            *(double *)pFVar2 = local_208;
            *(double *)(pFVar2 + 8) = dStack_200;
            iVar23 = iVar23 + 1;
            *(double *)(FVar26.Data + lVar10 * 0x18 + 0x10) = local_1f8;
            dVar27 = (double)iVar23;
            dVar33 = local_3b8;
            dVar29 = local_3b0;
            uVar20 = local_res20;
          } while (dVar27 < local_3b8);
        }
        local_res20 = uVar20 + 1;
        plVar14 = (longlong *)(ulonglong)local_res20;
        dVar34 = (double)(int)local_res20;
        pUVar24 = local_340;
        iVar23 = local_3a0;
      } while (dVar34 < dVar29);
    }
    pvVar7 = `IEnhancedInputSubsystemInterface::ShowDebugActionModifiers'::__l8::<lambda_4>::
             operator()(&local_2f8,pUVar24,&SampleData);
    local_370 = CONCAT62(extraout_var,pvVar7);
    if (local_370 != 0) {
      pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_370 + 0xc));
      FUObjectItem::SetRootFlags(pFVar15,RootSet);
    }
    local_290 = &local_338;
    local_288 = &local_370;
    local_338 = pUVar24;
    TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_&&,FVisualizationTexture_&&>_>
              ((TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
                *)&CachedModifierVisualizations,
               (TPairInitializer<unsigned___int64_&&,FVisualizationTexture_&&> *)local_390,
               (bool *)&local_290);
    pUVar22 = *(UTexture2D **)
               (CachedModifierVisualizations._0_8_ + 8 + (longlong)(int)local_390._0_4_ * 0x18);
    FVar26.Data = local_398;
    if ((GExitPurge == false) && (local_370 != 0)) {
      pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_370 + 0xc));
      FUObjectItem::ClearRootFlags(pFVar15,RootSet);
      FVar26.Data = local_398;
    }
LAB_14a6f73ce:
    pwVar19 = L"";
    if (iVar23 != 0) {
      pwVar19 = L"+";
    }
    ::FString::FString(&local_2e0,pwVar19);
    `IEnhancedInputSubsystemInterface::ShowDebugActionModifiers'::__l8::<lambda_2>::operator()
              (&local_260,(UInputModifier *)pUVar24,pUVar22,&local_2e0);
    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    }
    uVar17 = (ulonglong)(uint)local_390._4_4_;
    iVar23 = 1;
    FVar26.Data = FVar26.Data + 8;
    local_3a0 = 1;
  }
  if (CachedModifierVisualizations._8_4_ != CachedModifierVisualizations._52_4_) {
    lVar10 = 0x154caf4f8;
    if (CachedModifierVisualizations._64_8_ != 0) {
      lVar10 = CachedModifierVisualizations._64_8_;
    }
    iVar23 = *(int *)(lVar10 + ((longlong)&local_3a8->SourceAction +
                                ((ulonglong)local_3a8 >> 0x20) * 0x17 &
                               (ulonglong)(CachedModifierVisualizations._72_4_ - 1)) * 4);
    while (iVar23 != -1) {
      lVar10 = CachedModifierVisualizations._0_8_ + (longlong)iVar23 * 0x18;
      if (*(FInputActionInstance **)(CachedModifierVisualizations._0_8_ + (longlong)iVar23 * 0x18)
          == local_3a8) {
        plVar18 = (longlong *)(lVar10 + 8);
        if (lVar10 == 0) {
          plVar18 = plVar14;
        }
        if ((plVar18 != (longlong *)0x0) &&
           (pUVar22 = (UTexture2D *)*plVar18, pUVar22 != (UTexture2D *)0x0)) goto LAB_14a6f7550;
        break;
      }
      iVar23 = *(int *)(lVar10 + 0x10);
    }
  }
  pvVar7 = `IEnhancedInputSubsystemInterface::ShowDebugActionModifiers'::__l8::<lambda_4>::
           operator()(&local_2f8,(UObject *)pUVar8,&RunningSampleData);
  local_368 = CONCAT62(extraout_var_00,pvVar7);
  if (local_368 != 0) {
    pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_368 + 0xc));
    FUObjectItem::SetRootFlags(pFVar15,RootSet);
  }
  local_328 = local_3a8;
  local_2d0 = &local_328;
  local_2c8 = &local_368;
  TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&&,FVisualizationTexture_&&>_>
            ((TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
              *)&CachedModifierVisualizations,
             (TPairInitializer<unsigned___int64_&&,FVisualizationTexture_&&> *)(local_390 + 8),
             (bool *)&local_2d0);
  pUVar22 = *(UTexture2D **)
             (CachedModifierVisualizations._0_8_ + 8 + (longlong)(int)local_390._8_4_ * 0x18);
  if ((GExitPurge == false) && (local_368 != 0)) {
    pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_368 + 0xc));
    FUObjectItem::ThisThreadAtomicallyClearedFlag(pFVar15,RootSet);
  }
LAB_14a6f7550:
  ::FString::FString(&local_2c0,L"=");
  `IEnhancedInputSubsystemInterface::ShowDebugActionModifiers'::__l8::<lambda_2>::operator()
            (&local_260,(UInputModifier *)0x0,pUVar22,&local_2c0);
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  (local_320->CurrentPos).field0_0x0._s_0.Y = (float)local_384;
  return;
}

// ShowDebugInfo @ 14a6f7620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::ShowDebugInfo
          (IEnhancedInputSubsystemInterface *this,UCanvas *param_1)

{
  int iVar1;
  longlong lVar2;
  UEnhancedPlayerInput *pUVar3;
  UClass *pUVar4;
  float local_res10 [2];
  FName local_res18;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  FString local_28;
  
  if (param_1 != (UCanvas *)0x0) {
    pUVar3 = (UEnhancedPlayerInput *)(**(code **)(this->_padding_ + 0x10))();
    if (pUVar3 == (UEnhancedPlayerInput *)0x0) {
      local_res10[0] = 0.0;
      local_38 = (float)FColor::Orange.field0_0x0._2_1_ * __real_3b808081;
      fStack_34 = (float)FColor::Orange.field0_0x0._1_1_ * __real_3b808081;
      fStack_30 = (float)FColor::Orange.field0_0x0._0_1_ * __real_3b808081;
      fStack_2c = (float)FColor::Orange.field0_0x0._3_1_ * __real_3b808081;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = local_38;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fStack_34;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fStack_30;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fStack_2c;
      ::FString::FString((FString *)&local_38,
                         L"This player does not support Enhanced Input. To enable it update Project Settings -> Input -> Default Classes to the Enhanced versions."
                        );
      FDisplayDebugManager::DrawString
                (&param_1->DisplayDebugManager,(FString *)&local_38,local_res10);
      if ((void *)CONCAT44(fStack_34,local_38) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(fStack_34,local_38));
        return;
      }
    }
    else {
      lVar2 = pUVar3->_padding_;
      if (lVar2 != 0) {
        pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          local_res10[0] = 0.0;
          local_38 = (float)FColor::White.field0_0x0._2_1_ * __real_3b808081;
          fStack_34 = (float)FColor::White.field0_0x0._1_1_ * __real_3b808081;
          fStack_30 = (float)FColor::White.field0_0x0._0_1_ * __real_3b808081;
          fStack_2c = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
          *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = local_38;
          *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
               fStack_34;
          *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fStack_30;
          *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
               fStack_2c;
          local_res18 = *(FName *)(lVar2 + 0x18);
          ::FName::ToString(&local_res18,&local_28);
          ::FString::PrintfImpl((FString *)&local_38,L"Player: %s");
          FDisplayDebugManager::DrawString
                    (&param_1->DisplayDebugManager,(FString *)&local_38,local_res10);
          if ((void *)CONCAT44(fStack_34,local_38) != (void *)0x0) {
            FMemory::Free((void *)CONCAT44(fStack_34,local_38));
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
      }
      ShowMappingContextDebugInfo(this,param_1,pUVar3);
    }
  }
  return;
}

// ShowMappingContextDebugInfo @ 14a6f8da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a6fa760) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::ShowMappingContextDebugInfo
          (IEnhancedInputSubsystemInterface *this,UCanvas *param_1,UEnhancedPlayerInput *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  EMappingContextRegistrationTrackingMode EVar4;
  FScriptContainerElement FVar5;
  byte bVar6;
  FScriptContainerElement FVar7;
  UInputMappingContext *pUVar8;
  TObjectPtr<UInputAction_const_>_u_0 TVar9;
  FEnhancedActionKeyMapping *pFVar10;
  UInputAction *pUVar11;
  TReferenceControllerBase<1> *pTVar12;
  void *_Src;
  code *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  UEnhancedPlayerInput *pUVar25;
  IEnhancedInputSubsystemInterface *pIVar26;
  bool bVar27;
  char cVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar33;
  TObjectPtr<UInputMappingContext_const_> *pTVar34;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar35;
  TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>
  *pTVar36;
  FEnhancedActionKeyMapping *pFVar37;
  FName FVar38;
  FKeyState *pFVar39;
  FString *pFVar40;
  FText *this_00;
  FString *pFVar41;
  longlong lVar42;
  FInputActionInstance *pFVar43;
  UClass *pUVar44;
  UEnum *this_01;
  ETriggerEvent EVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  longlong *plVar48;
  FKeyState *pFVar49;
  ForElementType<FSetElementId> FVar50;
  wchar_t *pwVar51;
  char *pcVar52;
  FColor_u_0 FVar53;
  ForAnyElementType *pFVar54;
  FScriptContainerElement *pFVar55;
  FEnhancedActionKeyMapping *pFVar56;
  undefined8 *puVar57;
  FScriptContainerElement *pFVar58;
  int iVar59;
  int iVar60;
  ForAnyElementType FVar61;
  longlong *plVar62;
  FDisplayDebugManager *pFVar63;
  char cVar64;
  FEnhancedActionKeyMapping *pFVar65;
  ForAnyElementType FVar66;
  float fVar67;
  double dVar68;
  float fVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined1 auStackY_828 [32];
  FNameLexicalLess local_7d8 [4];
  uint local_7d4;
  undefined1 local_7d0;
  undefined1 local_7cf;
  undefined1 local_7ce;
  undefined1 local_7cd;
  undefined1 local_7cc;
  undefined1 local_7cb;
  undefined1 local_7ca;
  undefined1 local_7c9;
  undefined1 local_7c8;
  undefined1 local_7c7 [7];
  ForAnyElementType local_7c0;
  undefined8 local_7b8;
  undefined1 local_7b0 [16];
  FDisplayDebugManager *local_7a0;
  longlong *local_798;
  UInputMappingContext *local_790;
  UEnhancedPlayerInput *local_788;
  ForAnyElementType local_780;
  int local_778;
  int local_774;
  FScriptContainerElement *local_770;
  FString local_768;
  FScriptContainerElement *local_758;
  ForAnyElementType local_750;
  int local_748;
  int local_744;
  TArray<UInputAction_const_*,TSizedDefaultAllocator<32>_> local_740;
  FString local_730;
  FString local_720;
  FColor_u_0 local_710 [2];
  FString local_708;
  uint local_6f8;
  float local_6f4;
  float local_6f0;
  float local_6ec;
  uint local_6e8;
  FString local_6e0;
  FString local_6d0;
  float local_6c0;
  float local_6bc;
  float local_6b8 [2];
  FString local_6b0;
  float local_6a0;
  float local_69c;
  FKey local_698;
  undefined4 local_680;
  undefined4 uStack_67c;
  double dStack_678;
  undefined8 local_670;
  FString local_660;
  FString local_650;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_640;
  UInputMappingContext *local_620;
  FName local_618;
  FName local_610;
  FName local_608;
  TObjectPtr<UInputAction_const_>_u_0 local_600;
  TObjectPtr<UInputAction_const_>_u_0 local_5f8;
  UInputTrigger *local_5f0;
  UInputTrigger *local_5e8;
  FString *local_5e0;
  FName local_5d8;
  FName local_5d0;
  longlong *local_5c8;
  TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>
  *local_5c0;
  FName local_5b8;
  FScriptContainerElement *local_5b0;
  UInputMappingContext *local_5a8;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  TPairInitializer<FName_&&,FString_&&> local_500;
  IEnhancedInputSubsystemInterface *local_4f0;
  longlong *local_4e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4e0;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  EInputActionValueType EStack_4a0;
  undefined7 uStack_49f;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FName local_408;
  FString *local_400;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  wchar_t *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FKey local_358;
  undefined1 local_340 [40];
  int local_318;
  undefined4 uStack_314;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  TStringView<wchar_t> local_298;
  FString local_288;
  FString local_278 [2];
  FText local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  FString local_1f8;
  FString local_1e8;
  longlong *local_1d8;
  longlong lStack_1d0;
  TBitArray<FDefaultBitArrayAllocator> *local_1c8;
  undefined8 uStack_1c0;
  int iStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [32];
  undefined8 uStack_188;
  int local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  ForElementType<FSetElementId> local_168;
  int local_160;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_158;
  undefined1 local_108 [40];
  int local_e0;
  int local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  ulonglong local_b8;
  
  fVar23 = __real_3b808081;
  if (param_1 != (UCanvas *)0x0) {
    local_b8 = __security_cookie.value ^ (ulonglong)auStackY_828;
    pFVar63 = &param_1->DisplayDebugManager;
    local_7d4 = 0;
    local_7a0 = pFVar63;
    local_788 = param_2;
    local_4f0 = this;
    if (param_2 == (UEnhancedPlayerInput *)0x0) {
      uVar29 = (uint)FColor::Red.field0_0x0 >> 0x18;
      fVar69 = (float)((uint)FColor::Red.field0_0x0 >> 8 & 0xff) * __real_3b808081;
      fVar67 = (float)((uint)FColor::Red.field0_0x0 & 0xff) * __real_3b808081;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
           (float)((uint)FColor::Red.field0_0x0 >> 0x10 & 0xff) * __real_3b808081;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar69;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fVar67;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)uVar29 * fVar23;
      local_6b8[0] = 0.0;
      ::FString::FString(&local_378,L"Invalid Player Input!");
      FDisplayDebugManager::DrawString(pFVar63,&local_378,local_6b8);
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
    }
    else {
      uVar29 = (uint)FColor::Cyan.field0_0x0._s_0.A;
      fVar69 = (float)FColor::Cyan.field0_0x0._1_1_ * __real_3b808081;
      fVar67 = (float)FColor::Cyan.field0_0x0._0_1_ * __real_3b808081;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
           (float)FColor::Cyan.field0_0x0._2_1_ * __real_3b808081;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar69;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fVar67;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)uVar29 * fVar23;
      local_6bc = 0.0;
      FGameplayTagContainer::ToString(&param_2->CurrentInputMode,&local_310);
      ::FString::PrintfImpl(&local_368,L"Input Mode: %s");
      FDisplayDebugManager::DrawString(pFVar63,&local_368,&local_6bc);
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      if ((*(int *)&(param_2->LastInjectedActions).Elements.field_0x8 -
          *(int *)&(param_2->LastInjectedActions).Elements.field_0x34) +
          (param_2->EnhancedActionMappings).ArrayNum == 0) {
        uVar29 = (uint)FColor::Orange.field0_0x0 >> 8;
        uVar30 = (uint)FColor::Orange.field0_0x0 & 0xff;
        uVar32 = (uint)FColor::Orange.field0_0x0 >> 0x18;
        *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
             (float)((uint)FColor::Orange.field0_0x0 >> 0x10 & 0xff) * fVar23;
        *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
             (float)(uVar29 & 0xff) * fVar23;
        *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar30 * fVar23;
        *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
             (float)uVar32 * fVar23;
        local_6ec = 0.0;
        ::FString::FString(&local_498,
                           L"No enhanced player input action mappings have been applied to this input."
                          );
        FDisplayDebugManager::DrawString(pFVar63,&local_498,&local_6ec);
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_158.Elements._0_8_ = 0;
        local_158.Elements._8_8_ = 0;
        local_158.Elements._32_8_ = 0;
        local_158.Elements._40_4_ = 0;
        local_158.Elements._44_4_ = 0x80;
        local_158.Elements._48_4_ = 0xffffffff;
        local_158.Elements._52_4_ = 0;
        local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_158.HashSize = 0;
        TMap<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
        ::
        TMap<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                  ((TMap<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
                    *)local_108,&param_2->AppliedInputContextData);
        local_500.Value = (FString *)local_7b0;
        TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
        ::
        Sort<TSortableMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>::FValueComparisonClass<_IEnhancedInputSubsystemInterface::ShowMappingContextDebugInfo_::__l13::<lambda_3>_>_>
                  ((TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
                    *)local_108,
                   (FValueComparisonClass<_protected:_void___cdecl_IEnhancedInputSubsystemInterface::ShowMappingContextDebugInfo(UCanvas_*,UEnhancedPlayerInput_const_*)_::_13_::<lambda_3>_>
                    *)&local_500.Value);
        local_640.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
        local_640._padding_._0_4_ = 0;
        local_640._padding_._4_4_ = 1;
        local_640.UnvisitedBitMask = 0xffffffff;
        local_640.CurrentBitIndex = 0;
        local_640.BaseBitIndex = 0;
        if (local_e0 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_640);
        }
        TStack_4e0._padding_ = CONCAT44(local_640._padding_._4_4_,(undefined4)local_640._padding_);
        local_4e8 = (longlong *)local_108;
        TStack_4e0.CurrentBitIndex = local_640.CurrentBitIndex;
        TStack_4e0.UnvisitedBitMask = local_640.UnvisitedBitMask;
        TStack_4e0._28_4_ = local_640._28_4_;
        TStack_4e0.BaseBitIndex = local_640.BaseBitIndex;
        local_318 = local_108._8_4_ - local_d4;
        local_340._16_8_ = local_640.Array;
        uStack_4c0 = CONCAT44(uStack_314,local_318);
        TStack_4e0.Array = local_640.Array;
        local_340._0_8_ = local_4e8;
        local_340._8_8_ = TStack_4e0._padding_;
        local_340._24_8_ = TStack_4e0._16_8_;
        local_340._32_8_ = TStack_4e0._24_8_;
        pTVar33 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_340,
                             (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),local_e0);
        dVar24 = __real_3e45798ec0000000;
        local_1d8 = (longlong *)local_108;
        lStack_1d0 = pTVar33->_padding_;
        local_1c8 = pTVar33->Array;
        uStack_1c0._0_4_ = pTVar33->UnvisitedBitMask;
        iStack_1bc = pTVar33->CurrentBitIndex;
        local_1b8._0_4_ = pTVar33->BaseBitIndex;
        local_1b8._4_4_ = *(undefined4 *)&pTVar33->field_0x1c;
        local_180 = local_108._8_4_ - local_d4;
        uStack_1b0 = CONCAT44(local_17c,local_180);
        local_1a8._0_8_ = local_1d8;
        local_1a8._8_8_ = lStack_1d0;
        local_1a8._16_8_ = local_1c8;
        local_1a8._24_8_ = uStack_1c0;
        uStack_188 = local_1b8;
        while( true ) {
          plVar62 = local_4e8;
          if ((int)local_4e8[1] - *(int *)((longlong)local_4e8 + 0x34) != (int)uStack_4c0) {
            local_7d8[0] = (FNameLexicalLess)0x0;
            `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_7d8);
          }
          pFVar63 = local_7a0;
          if (((TStack_4e0.CurrentBitIndex == iStack_1bc) && (TStack_4e0.Array == local_1c8)) &&
             (plVar62 == local_1d8)) break;
          local_770 = (FScriptContainerElement *)*plVar62;
          pUVar8 = *(UInputMappingContext **)
                    (local_770 + (longlong)TStack_4e0.CurrentBitIndex * 0x18);
          local_7b0._8_8_ = pUVar8;
          if (pUVar8 == (UInputMappingContext *)0x0) {
            uVar29 = (uint)FColor::Red.field0_0x0 >> 8;
            uVar30 = (uint)FColor::Red.field0_0x0 & 0xff;
            uVar32 = (uint)FColor::Red.field0_0x0 >> 0x18;
            *(float *)&(local_7a0->DebugTextItem)._padding_ =
                 (float)((uint)FColor::Red.field0_0x0 >> 0x10 & 0xff) * fVar23;
            *(float *)((longlong)&(local_7a0->DebugTextItem)._padding_ + 4) =
                 (float)(uVar29 & 0xff) * fVar23;
            *(float *)&(local_7a0->DebugTextItem)._padding_ = (float)uVar30 * fVar23;
            *(float *)((longlong)&(local_7a0->DebugTextItem)._padding_ + 4) = (float)uVar32 * fVar23
            ;
            local_6c0 = 0.0;
            ::FString::FString(&local_488,L"Null Input Mapping Context!");
            FDisplayDebugManager::DrawString(pFVar63,&local_488,&local_6c0);
            if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_488.Data.AllocatorInstance.Data);
            }
          }
          else {
            uVar29 = (uint)FColor::Yellow.field0_0x0 >> 8;
            local_758 = (FScriptContainerElement *)0x0;
            uVar30 = (uint)FColor::Yellow.field0_0x0 & 0xff;
            uVar32 = (uint)FColor::Yellow.field0_0x0 >> 0x18;
            *(float *)&(local_7a0->DebugTextItem)._padding_ =
                 (float)((uint)FColor::Yellow.field0_0x0 >> 0x10 & 0xff) * fVar23;
            *(float *)((longlong)&(local_7a0->DebugTextItem)._padding_ + 4) =
                 (float)(uVar29 & 0xff) * fVar23;
            *(float *)&(local_7a0->DebugTextItem)._padding_ = (float)uVar30 * fVar23;
            *(float *)((longlong)&(local_7a0->DebugTextItem)._padding_ + 4) = (float)uVar32 * fVar23
            ;
            EVar4 = pUVar8->RegistrationTrackingMode;
            if (EVar4 != Untracked) {
              if (EVar4 == CountRegistrations) {
                ::FString::PrintfImpl(&local_660,L" | Registration Count: %d");
                local_758 = local_660.Data.AllocatorInstance.Data;
                local_660.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_660.Data.ArrayNum = 0;
                local_660.Data.ArrayMax = 0;
              }
              else {
                bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystemInterfaceDebug.cpp"
                                    ,0x88,L"");
                if (bVar27) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
            }
            pIVar26 = local_4f0;
            local_620 = pUVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            pTVar34 = TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
                      ::Find((TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
                              *)&pIVar26->AppliedContextRedirects,
                             (TObjectPtr<UInputMappingContext_const_>)&local_620);
            if (pTVar34 == (TObjectPtr<UInputMappingContext_const_> *)0x0) {
              local_6f4 = 0.0;
              UEnum::GetValueAsString<enum_EMappingContextRegistrationTrackingMode>
                        (&local_1f8,EVar4);
              local_608 = *(FName *)(local_7b0._8_8_ + 0x18);
              ::FName::ToString(&local_608,&local_248);
              ::FString::PrintfImpl
                        (&local_468,L"  Context: %s | Priority: %d | Tracking Mode: %s%s");
              FDisplayDebugManager::DrawString(local_7a0,&local_468,&local_6f4);
              if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_468.Data.AllocatorInstance.Data);
              }
              if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Data.AllocatorInstance.Data);
              }
              if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
              }
            }
            else {
              pUVar8 = (pTVar34->field0_0x0).DebugPtr;
              local_6f0 = 0.0;
              local_790 = pUVar8;
              UEnum::GetValueAsString<enum_EMappingContextRegistrationTrackingMode>
                        (&local_238,EVar4);
              local_618 = (FName)pUVar8->_padding_;
              ::FName::ToString(&local_618,&local_228);
              local_610 = *(FName *)(local_7b0._8_8_ + 0x18);
              ::FName::ToString(&local_610,&local_1e8);
              ::FString::PrintfImpl
                        (&local_478,
                         L"  Redirected Context: %s -> %s | Priority: %d | Tracking Mode: %s%s");
              FDisplayDebugManager::DrawString(local_7a0,&local_478,&local_6f0);
              if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_478.Data.AllocatorInstance.Data);
              }
              if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
              }
              if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_228.Data.AllocatorInstance.Data);
              }
              if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_238.Data.AllocatorInstance.Data);
              }
              local_7b0._8_8_ = local_790;
            }
            local_17c = 0x80;
            local_740.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_740.ArrayNum = 0;
            local_740.ArrayMax = 0;
            local_1a8._0_8_ = (longlong *)0x0;
            local_1a8._8_8_ = 0;
            uStack_188 = 0;
            local_180 = 0;
            local_174 = 0;
            local_168 = (ForElementType<FSetElementId>)0x0;
            local_160 = 0;
            local_178 = 0xffffffff;
            iVar59 = (((FInputMappingContextMappingData *)(local_7b0._8_8_ + 0x40))->Mappings).
                     ArrayNum;
            pFVar56 = (FEnhancedActionKeyMapping *)
                      (((FInputMappingContextMappingData *)(local_7b0._8_8_ + 0x40))->Mappings).
                      AllocatorInstance.Data;
            pFVar65 = pFVar56 + iVar59;
            while( true ) {
              if ((((FInputMappingContextMappingData *)(local_7b0._8_8_ + 0x40))->Mappings).ArrayNum
                  != iVar59) {
                local_7d0 = 0;
                `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_7d0);
              }
              pUVar25 = local_788;
              if (pFVar56 == pFVar65) break;
              TVar9 = (TObjectPtr<UInputAction_const_>_u_0)(pFVar56->Action).field0_0x0.DebugPtr;
              if (TVar9.DebugPtr != (UInputAction *)0x0) {
                uVar29 = ((uint)((ulonglong)TVar9.DebugPtr >> 0x14) & 0xffff ^
                         (uint)((ulonglong)TVar9.DebugPtr >> 4)) * -0x7a143595;
                uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
                local_600 = TVar9;
                pTVar35 = TMapBase<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,0>_>
                          ::FindOrAddImpl<UInputAction_const_*>
                                    ((TMapBase<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,0>_>
                                      *)local_1a8,uVar29 >> 0x10 ^ uVar29,&local_600.DebugPtr);
                pFVar10 = (FEnhancedActionKeyMapping *)(pTVar35->AllocatorInstance).Data;
                if (((pFVar10 <= pFVar56) && (pFVar56 < pFVar10 + pTVar35->ArrayMax)) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar31 = pTVar35->ArrayNum;
                if (iVar31 == pTVar35->ArrayMax) {
                  iVar31 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x850,&pTVar35->AllocatorInstance,&pTVar35->ArrayMax);
                }
                pTVar35->ArrayNum = iVar31 + 1;
                FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
                          ((FEnhancedActionKeyMapping *)
                           ((pTVar35->AllocatorInstance).Data + (longlong)iVar31 * 0x50),pFVar56);
                local_5f8 = (pFVar56->Action).field0_0x0;
                TArray<UInputAction_const_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<UInputAction_const_*>(&local_740,&local_5f8.DebugPtr);
              }
              pFVar56 = pFVar56 + 1;
            }
            iVar59 = (local_788->EnhancedActionMappings).ArrayNum;
            pFVar56 = (FEnhancedActionKeyMapping *)
                      (local_788->EnhancedActionMappings).AllocatorInstance.Data;
            pFVar65 = pFVar56 + iVar59;
            while( true ) {
              if ((pUVar25->EnhancedActionMappings).ArrayNum != iVar59) {
                local_7cf = 0;
                `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_7cf);
              }
              if (pFVar56 == pFVar65) break;
              pUVar11 = (pFVar56->Action).field0_0x0.DebugPtr;
              pTVar36 = TSet<TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                *)local_1a8,pUVar11);
              pFVar54 = (ForAnyElementType *)&pTVar36->field_0x8;
              if (pTVar36 ==
                  (TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
                pFVar54 = (ForAnyElementType *)0x0;
              }
              if (pFVar54 != (ForAnyElementType *)0x0) {
                pFVar10 = (FEnhancedActionKeyMapping *)pFVar54->Data;
                if (pFVar10 != pFVar10 + *(int *)&pFVar54[1].Data) {
                  pFVar37 = pFVar10;
                  do {
                    if (((pFVar37->Key).KeyName == (pFVar56->Key).KeyName) &&
                       ((pFVar37->Action).field0_0x0.DebugPtr == pUVar11)) goto LAB_14a6f997f;
                    pFVar37 = pFVar37 + 1;
                  } while (pFVar37 != pFVar10 + *(int *)&pFVar54[1].Data);
                }
                if (((pFVar10 <= pFVar56) &&
                    (pFVar56 < pFVar10 + *(int *)((longlong)&pFVar54[1].Data + 4))) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar31 = *(int *)&pFVar54[1].Data;
                piVar1 = (int *)((longlong)&pFVar54[1].Data + 4);
                if (iVar31 == *piVar1) {
                  iVar31 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x850,pFVar54,piVar1);
                }
                *(int *)&pFVar54[1].Data = iVar31 + 1;
                FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
                          ((FEnhancedActionKeyMapping *)(pFVar54->Data + (longlong)iVar31 * 0x50),
                           pFVar56);
              }
LAB_14a6f997f:
              pFVar56 = pFVar56 + 1;
            }
            AlgoImpl::
            IntroSortInternal<UInputAction_const_*,int,UE::Core::Private::TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const_>,FNameLexicalLess>
                      ((UInputAction **)local_740.AllocatorInstance.Data,local_740.ArrayNum,
                       (TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const>)
                       0x141f81bb0,local_7d8[0]);
            uVar46 = (ulonglong)local_740.ArrayNum;
            local_6e8 = local_740.ArrayNum;
            local_5b0 = local_740.AllocatorInstance.Data + uVar46 * 8;
            uVar47 = uVar46;
            FVar61.Data = local_740.AllocatorInstance.Data;
            uVar29 = local_7d4;
            while( true ) {
              pFVar55 = local_5b0;
              local_770 = FVar61.Data;
              if ((int)uVar46 != (int)uVar47) {
                local_7ce = 0;
                `TCheckedPointerIterator<UInputAction_const_*,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(&local_7ce);
              }
              if (FVar61.Data == pFVar55) break;
              local_790 = *(UInputMappingContext **)FVar61.Data;
              local_7c0.Data = (FScriptContainerElement *)0x0;
              local_7b8 = 0;
              pTVar36 = TSet<TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                *)local_1a8,(UInputAction *)local_790);
              local_5c0 = pTVar36;
              if ((pTVar36 ==
                   (TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>
                    *)0x0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x288,L""), bVar27)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              local_6f8 = *(uint *)&pTVar36->field_0x10;
              uVar47 = (ulonglong)(int)local_6f8;
              plVar62 = *(longlong **)&pTVar36->field_0x8;
              local_5c8 = plVar62 + uVar47 * 10;
              while( true ) {
                plVar48 = local_5c8;
                FVar61.Data = (FScriptContainerElement *)0x0;
                local_798 = plVar62;
                if (*(int *)&pTVar36->field_0x10 != (int)uVar47) {
                  local_7cd = 0;
                  `TCheckedPointerIterator<FEnhancedActionKeyMapping,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_7cd);
                }
                pUVar8 = local_790;
                if (plVar62 == plVar48) break;
                FVar38 = FKey::GetFName((FKey *)(plVar62 + 5));
                lVar42 = *(longlong *)FVar38;
                uVar32 = ::GetTypeHash((FNameEntryId)(uint)lVar42);
                FVar53 = FColor::White.field0_0x0;
                if (local_158.Elements._8_4_ != local_158.Elements._52_4_) {
                  FVar50 = (ForElementType<FSetElementId>)&local_158.Hash;
                  if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar50 = local_158.Hash.SecondaryData;
                  }
                  iVar59 = *(int *)((longlong)FVar50 +
                                   (ulonglong)
                                   (local_158.HashSize - 1U &
                                   (int)((ulonglong)lVar42 >> 0x20) + uVar32) * 4);
                  while (iVar59 != -1) {
                    plVar48 = (longlong *)((longlong)iVar59 * 0x20 + local_158.Elements._0_8_);
                    if (*plVar48 == lVar42) goto LAB_14a6f9aff;
                    iVar59 = (int)plVar48[3];
                  }
                }
                plVar48 = (longlong *)0x0;
LAB_14a6f9aff:
                pFVar40 = (FString *)(plVar48 + 1);
                if (plVar48 == (longlong *)0x0) {
                  pFVar40 = (FString *)0x0;
                }
                local_5e0 = pFVar40;
                ::FString::FString(&local_720,"      ");
                local_358.KeyName = *(FName *)(plVar62 + 5);
                pTVar12 = (TReferenceControllerBase<1> *)plVar62[7];
                local_358.KeyDetails.Object = (FKeyDetails *)plVar62[6];
                if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar12->SharedReferenceCount =
                       (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_358.KeyDetails.SharedReferenceCount.ReferenceController = pTVar12;
                pFVar39 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                          ::Find((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                                  *)&local_788->_padding_,&local_358);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar12);
                local_698.KeyName = *(FName *)(plVar62 + 5);
                local_698.KeyDetails.Object = (FKeyDetails *)plVar62[6];
                pFVar49 = (FKeyState *)&UE::Math::TVector<double>::ZeroVector;
                if (pFVar39 != (FKeyState *)0x0) {
                  pFVar49 = pFVar39;
                }
                local_698.KeyDetails.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)plVar62[7];
                uVar3 = *(undefined8 *)((longlong)&(pFVar49->RawValue).field0_0x0 + 0x10);
                uVar72 = (undefined4)uVar3;
                uVar73 = (undefined4)((ulonglong)uVar3 >> 0x20);
                uVar14 = *(undefined4 *)&(pFVar49->RawValue).field0_0x0;
                uVar15 = *(undefined4 *)((longlong)&(pFVar49->RawValue).field0_0x0 + 4);
                dVar22 = (pFVar49->RawValue).field0_0x0._s_0.X;
                dVar21 = (pFVar49->RawValue).field0_0x0._s_0.X;
                dVar68 = (pFVar49->RawValue).field0_0x0._s_0.X;
                dVar20 = (pFVar49->RawValue).field0_0x0._s_0.X;
                dVar19 = (pFVar49->RawValue).field0_0x0._s_0.X;
                pdVar16 = &(pFVar49->RawValue).field0_0x0._s_0.Y;
                uVar70 = *(undefined4 *)pdVar16;
                uVar71 = *(undefined4 *)((longlong)&(pFVar49->RawValue).field0_0x0 + 0xc);
                dVar18 = *pdVar16;
                dVar17 = *pdVar16;
                if (local_698.KeyDetails.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_698.KeyDetails.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_698.KeyDetails.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                bVar27 = FKey::IsAxis3D(&local_698);
                if (bVar27) {
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            (local_698.KeyDetails.SharedReferenceCount.ReferenceController);
                  cVar28 = '\x03';
                  cVar64 = '\x03';
                  dStack_678 = dVar17;
                  local_670 = uVar3;
                }
                else {
                  bVar27 = FKey::IsAxis2D(&local_698);
                  if (bVar27) {
                    cVar28 = '\x02';
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_698.KeyDetails.SharedReferenceCount.ReferenceController);
                    cVar64 = '\x02';
                    dStack_678 = dVar18;
                  }
                  else {
                    bVar27 = FKey::IsAxis1D(&local_698);
                    bVar27 = !bVar27;
                    if (bVar27) {
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_698.KeyDetails.SharedReferenceCount.ReferenceController);
                    }
                    else {
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_698.KeyDetails.SharedReferenceCount.ReferenceController);
                    }
                    cVar64 = !bVar27;
                    cVar28 = !bVar27;
                    uVar70 = 0;
                    uVar71 = 0;
                    dStack_678 = 0.0;
                  }
                  uVar72 = 0;
                  uVar73 = 0;
                  local_670 = 0;
                }
                local_680 = uVar14;
                uStack_67c = uVar15;
                if (pFVar40 == (FString *)0x0) {
                  if ((cVar28 == '\0') || (cVar28 == '\x01')) {
                    dVar68 = dVar68 * dVar68;
                  }
                  else if (cVar28 == '\x02') {
                    dVar68 = dVar20 * dVar20 +
                             (double)CONCAT44(uVar71,uVar70) * (double)CONCAT44(uVar71,uVar70);
                  }
                  else {
                    if (cVar28 != '\x03') {
                      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("false",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Public\\InputActionValue.h"
                                          ,0x9b,L"Unsupported value type for input action value!");
                      if (bVar27) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      goto LAB_14a6f9cdb;
                    }
                    dVar68 = dVar19 * dVar19 +
                             (double)CONCAT44(uVar71,uVar70) * (double)CONCAT44(uVar71,uVar70) +
                             (double)CONCAT44(uVar73,uVar72) * (double)CONCAT44(uVar73,uVar72);
                  }
                  if ((float)dVar68 == 0.0) goto LAB_14a6f9cdb;
                  ::FString::FString(&local_428," ) - ");
                  if (cVar64 == '\0') {
                    pwVar51 = L"false";
                    if (dVar24 <= dVar21 * dVar22 +
                                  (double)CONCAT44(uVar71,uVar70) * (double)CONCAT44(uVar71,uVar70)
                                  + (double)CONCAT44(uVar73,uVar72) *
                                    (double)CONCAT44(uVar73,uVar72)) {
                      pwVar51 = L"true";
                    }
                    ::FString::FString(&local_730,pwVar51);
                  }
                  else if (cVar64 == '\x01') {
                    ::FString::PrintfImpl(&local_730,L"%3.3f");
                  }
                  else if (cVar64 == '\x02') {
                    ::FString::PrintfImpl(&local_730,L"X=%3.3f Y=%3.3f");
                  }
                  else if (cVar64 == '\x03') {
                    ::FString::PrintfImpl(&local_730,L"X=%3.3f Y=%3.3f Z=%3.3f");
                  }
                  else {
                    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("false",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Public\\InputActionValue.h"
                                        ,0xbf,L"Unsupported value type for input action value!");
                    if (bVar27) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    local_730.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_730.Data.ArrayNum = 0;
                    local_730.Data.ArrayMax = 0;
                  }
                  ::FString::FString(&local_438," - ( ");
                  ::FString::ConcatFF(&local_448,&local_438,&local_730);
                  ::FString::ConcatFF(&local_458,&local_448,&local_428);
                  uVar29 = uVar29 | 0x1f;
                  pFVar40 = &local_458;
                }
                else {
LAB_14a6f9cdb:
                  uVar29 = uVar29 | 0x20;
                  pFVar40 = ::FString::FString(&local_300," - ");
                }
                this_00 = FKey::GetDisplayName((FKey *)(plVar62 + 5),&local_258,true);
                pFVar41 = FText::ToString(this_00);
                ::FString::ConcatFF(&local_5a0,pFVar41,pFVar40);
                iVar59 = local_5a0.Data.ArrayNum + -1;
                if (local_5a0.Data.ArrayNum == 0) {
                  iVar59 = 0;
                }
                ::FString::AppendChars
                          (&local_720,(wchar_t *)local_5a0.Data.AllocatorInstance.Data,iVar59);
                if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
                }
                if (local_258.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
                }
                if (((uVar29 & 0x20) != 0) &&
                   (uVar29 = uVar29 & 0xffffffdf,
                   local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_300.Data.AllocatorInstance.Data);
                }
                if (((uVar29 & 0x10) != 0) &&
                   (uVar29 = uVar29 & 0xffffffef,
                   local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_458.Data.AllocatorInstance.Data);
                }
                if (((uVar29 & 8) != 0) &&
                   (uVar29 = uVar29 & 0xfffffff7,
                   local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_448.Data.AllocatorInstance.Data);
                }
                if (((uVar29 & 4) != 0) &&
                   (uVar29 = uVar29 & 0xfffffffb,
                   local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_438.Data.AllocatorInstance.Data);
                }
                if (((uVar29 & 2) != 0) &&
                   (uVar29 = uVar29 & 0xfffffffd,
                   local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_730.Data.AllocatorInstance.Data);
                }
                if (((uVar29 & 1) != 0) &&
                   (uVar29 = uVar29 & 0xfffffffe,
                   local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_428.Data.AllocatorInstance.Data);
                }
                puVar57 = (undefined8 *)*plVar62;
                lVar42 = plVar62[1];
                puVar2 = puVar57 + (int)lVar42;
                while( true ) {
                  if ((int)plVar62[1] != (int)lVar42) {
                    local_7cc = 0;
                    `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_7cc);
                  }
                  if (puVar57 == puVar2) {
                    lVar42 = plVar62[4];
                    puVar57 = *(undefined8 **)(lVar42 + 0x50);
                    iVar59 = *(int *)(lVar42 + 0x58);
                    puVar2 = puVar57 + iVar59;
                    goto LAB_14a6fa030;
                  }
                  local_5f0 = (UInputTrigger *)*puVar57;
                  bVar27 = UE::Core::Private::Function::
                           TFunctionRefCaller<`IEnhancedInputSubsystemInterface::ShowMappingContextDebugInfo'::__l59::<lambda_6>,bool,UInputTrigger_const_*>
                           ::Call(&local_7ca,&local_5f0);
                  if (bVar27) break;
                  puVar57 = puVar57 + 1;
                }
LAB_14a6fa015:
                bVar27 = true;
LAB_14a6fa071:
                pFVar40 = local_5e0;
                if (local_5e0 == (FString *)0x0) {
                  if ((bVar27) || (*(char *)(plVar62[4] + 0x41) == '\0')) {
                    plVar48 = local_798;
                    if (*(char *)(plVar62[4] + 0x41) == '\0') {
                      ::FString::AppendChars(&local_720," (Not consuming input)",0x16);
                      plVar48 = local_798;
                    }
                  }
                  else {
                    local_5d8 = (FName)local_790->_padding_;
                    pFVar40 = ::FName::ToString(&local_5d8,&local_2e0);
                    ::FString::FString(&local_3d8,":");
                    local_5d0 = *(FName *)(local_7b0._8_8_ + 0x18);
                    pFVar41 = ::FName::ToString(&local_5d0,&local_2f0);
                    ::FString::ConcatFF(&local_3e8,pFVar41,&local_3d8);
                    ::FString::ConcatFF(&local_3f8,&local_3e8,pFVar40);
                    plVar48 = local_798;
                    local_408 = FKey::GetFName((FKey *)(local_798 + 5));
                    local_400 = &local_3f8;
                    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<FName_&&,FString_&&>_>
                              (&local_158,&local_500,(bool *)&local_408);
                    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
                    }
                    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
                    }
                    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
                    }
                    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
                    }
                    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
                    }
                  }
                }
                else {
                  ::FString::FString(&local_418,"  : OVERRIDDEN BY ");
                  ::FString::ConcatFF(&local_590,&local_418,pFVar40);
                  iVar59 = local_590.Data.ArrayNum + -1;
                  if (local_590.Data.ArrayNum == 0) {
                    iVar59 = 0;
                  }
                  ::FString::AppendChars
                            (&local_720,(wchar_t *)local_590.Data.AllocatorInstance.Data,iVar59);
                  if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_590.Data.AllocatorInstance.Data);
                  }
                  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_418.Data.AllocatorInstance.Data);
                  }
                  FVar53.Bits = 0xff404040;
                  plVar48 = local_798;
                }
                ::FString::AppendChars(&local_720,"  ",2);
                pFVar55 = (local_788->EnhancedActionMappings).AllocatorInstance.Data;
                iVar59 = (local_788->EnhancedActionMappings).ArrayNum;
                if (pFVar55 != pFVar55 + (longlong)iVar59 * 0x50) {
                  lVar42 = plVar48[4];
                  pFVar58 = pFVar55;
LAB_14a6fa294:
                  if ((((*(longlong *)(pFVar58 + 0x20) != lVar42) ||
                       (*(longlong *)(pFVar58 + 0x28) != plVar48[5])) ||
                      (*(int *)(pFVar58 + 8) != (int)plVar48[1])) ||
                     (((bVar27 = CompareItems<TObjectPtr<UInputTrigger>,int>
                                           (*(TObjectPtr<UInputTrigger> **)pFVar58,
                                            (TObjectPtr<UInputTrigger> *)*plVar48,
                                            *(int *)(pFVar58 + 8)), !bVar27 ||
                       (*(int *)(pFVar58 + 0x18) != (int)plVar48[3])) ||
                      (bVar27 = CompareItems<TObjectPtr<UInputModifier>,int>
                                          (*(TObjectPtr<UInputModifier> **)(pFVar58 + 0x10),
                                           (TObjectPtr<UInputModifier> *)plVar48[2],
                                           *(int *)(pFVar58 + 0x18)), pUVar25 = local_788, !bVar27))
                     )) goto LAB_14a6fa2d9;
                  uVar32 = (uint)(((longlong)pFVar58 - (longlong)pFVar55) / 0x50);
                  if (uVar32 != 0xffffffff) {
                    FVar61.Data = (FScriptContainerElement *)0x0;
                    uVar30 = 0;
                    if ((int)uVar32 < (local_788->EnhancedActionMappings).ArrayNum) {
                      uVar30 = ~uVar32 >> 0x1f;
                    }
                    if ((uVar30 == 0) &&
                       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar27)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    local_780.Data = (FScriptContainerElement *)0x0;
                    pFVar55 = (pUVar25->EnhancedActionMappings).AllocatorInstance.Data;
                    local_778 = *(int *)(pFVar55 + (longlong)(int)uVar32 * 0x50 + 8);
                    lVar42 = (longlong)local_778;
                    _Src = *(void **)(pFVar55 + (longlong)(int)uVar32 * 0x50);
                    if (local_778 == 0) {
                      local_774 = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,local_778,0,&local_780,local_778,&local_774);
                      memcpy(local_780.Data,_Src,lVar42 << 3);
                    }
                    iVar59 = local_778;
                    local_6e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_6e0.Data.ArrayNum = 0;
                    local_6e0.Data.ArrayMax = 0;
                    pFVar55 = local_780.Data + (longlong)local_778 * 8;
                    FVar66.Data = local_780.Data;
                    while( true ) {
                      if (local_778 != iVar59) {
                        local_7c9 = 0;
                        `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::
                        <lambda_1>::operator()(&local_7c9);
                      }
                      if (FVar66.Data == pFVar55) break;
                      plVar62 = *(longlong **)FVar66.Data;
                      if (plVar62 != (longlong *)0x0) {
                        (**(code **)(*plVar62 + 0x2d0))(plVar62,&local_570);
                        uVar32 = local_570.Data.ArrayNum - 1;
                        if (local_570.Data.ArrayNum == 0) {
                          uVar32 = 0;
                        }
                        if (uVar32 != 0) {
                          if (local_6e0.Data.ArrayNum < 2) {
                            uVar29 = uVar29 | 0x800;
                          }
                          else {
                            uVar29 = uVar29 | 0x1000;
                          }
                          pFVar40 = &local_2c0;
                          pcVar52 = "";
                          if (1 < local_6e0.Data.ArrayNum) {
                            pcVar52 = ", ";
                            pFVar40 = &local_2d0;
                          }
                          pFVar40 = ::FString::FString(pFVar40,pcVar52);
                          ::FString::ConcatFF(&local_580,pFVar40,&local_570);
                          iVar31 = local_580.Data.ArrayNum + -1;
                          if (local_580.Data.ArrayNum == 0) {
                            iVar31 = 0;
                          }
                          ::FString::AppendChars
                                    (&local_6e0,(wchar_t *)local_580.Data.AllocatorInstance.Data,
                                     iVar31);
                          if (local_580.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_580.Data.AllocatorInstance.Data);
                          }
                          if (((uVar29 >> 0xc & 1) != 0) &&
                             (uVar29 = uVar29 & 0xffffefff,
                             local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             )) {
                            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
                          }
                          if (((uVar29 >> 0xb & 1) != 0) &&
                             (uVar29 = uVar29 & 0xfffff7ff,
                             local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             )) {
                            FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
                          }
                        }
                        if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_570.Data.AllocatorInstance.Data);
                        }
                      }
                      FVar66.Data = FVar66.Data + 8;
                    }
                    if (local_6e0.Data.ArrayNum < 2) {
                      uVar29 = uVar29 | 0x8000;
                      local_3c8.Data.ArrayNum = 0;
                      pFVar40 = &local_3c8;
                    }
                    else {
                      ::FString::FString(&local_3b8,"  Triggers: ");
                      ::FString::ConcatFF(&local_560,&local_3b8,&local_6e0);
                      pFVar40 = &local_560;
                      uVar29 = uVar29 | 0x6000;
                      FVar61.Data = local_560.Data.AllocatorInstance.Data;
                    }
                    plVar48 = local_798;
                    (pFVar40->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    iVar59 = (pFVar40->Data).ArrayNum;
                    (pFVar40->Data).ArrayNum = 0;
                    (pFVar40->Data).ArrayMax = 0;
                    if (((uVar29 >> 0xf & 1) != 0) &&
                       (uVar29 = uVar29 & 0xffff7fff,
                       local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
                    }
                    if (((uVar29 >> 0xe & 1) != 0) &&
                       (uVar29 = uVar29 & 0xffffbfff,
                       local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                      FMemory::Free(local_560.Data.AllocatorInstance.Data);
                    }
                    if (((uVar29 >> 0xd & 1) != 0) &&
                       (uVar29 = uVar29 & 0xffffdfff,
                       local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                    }
                    if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
                    }
                    if (local_780.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_780.Data);
                    }
                    iVar31 = iVar59 + -1;
                    if (iVar59 == 0) {
                      iVar31 = 0;
                    }
                    ::FString::AppendChars(&local_720,(wchar_t *)FVar61.Data,iVar31);
                    if (FVar61.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FVar61.Data);
                    }
                    goto LAB_14a6fa2ea;
                  }
                }
LAB_14a6fa2e2:
                FVar53.Bits = 0xff404040;
LAB_14a6fa2ea:
                FVar61.Data = local_720.Data.AllocatorInstance.Data;
                local_6d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar59 = local_720.Data.ArrayNum;
                local_6d0.Data.ArrayNum = iVar59;
                if (iVar59 == 0) {
                  local_6d0.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar59,0,(ForAnyElementType *)&local_6d0,iVar59,
                             &local_6d0.Data.ArrayMax);
                  memcpy(local_6d0.Data.AllocatorInstance.Data,FVar61.Data,(longlong)iVar59 * 2);
                }
                local_710[0] = FVar53;
                ::FString::FString(&local_708,&local_6d0);
                if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
                }
                if (((local_7c0.Data <= local_710) &&
                    (local_710 < (FColor_u_0 *)(local_7c0.Data + (longlong)local_7b8._4_4_ * 0x18)))
                   && (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar59 = (int)local_7b8;
                if ((int)local_7b8 == local_7b8._4_4_) {
                  iVar59 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_7c0,(int *)((longlong)&local_7b8 + 4));
                }
                lVar42 = (longlong)iVar59;
                local_7b8 = CONCAT44(local_7b8._4_4_,iVar59 + 1);
                *(FColor_u_0 *)(local_7c0.Data + lVar42 * 0x18) = local_710[0];
                *(undefined8 *)(local_7c0.Data + lVar42 * 0x18 + 8) = 0;
                *(FScriptContainerElement **)(local_7c0.Data + lVar42 * 0x18 + 8) =
                     local_708.Data.AllocatorInstance.Data;
                *(int *)(local_7c0.Data + lVar42 * 0x18 + 0x10) = local_708.Data.ArrayNum;
                *(int *)(local_7c0.Data + lVar42 * 0x18 + 0x14) = local_708.Data.ArrayMax;
                local_708.Data.ArrayNum = 0;
                local_708.Data.ArrayMax = 0;
                local_708.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_720.Data.AllocatorInstance.Data);
                }
                plVar62 = plVar48 + 10;
                uVar47 = (ulonglong)local_6f8;
                pTVar36 = local_5c0;
              }
              local_7d4 = uVar29;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_790 != (UInputMappingContext *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_790);
              }
              pUVar25 = local_788;
              local_5a8 = pUVar8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar8 != (UInputMappingContext *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar8);
              }
              pFVar43 = TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                        ::Find((TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                                *)&pUVar25->ActionInstanceData,
                               (TObjectPtr<UInputAction_const_>)&local_5a8);
              pFVar63 = local_7a0;
              if (pFVar43 == (FInputActionInstance *)0x0) {
                EVar45 = None;
              }
              else {
                EVar45 = pFVar43->TriggerEvent;
              }
              if (EVar45 == None) {
LAB_14a6fa89a:
                uVar32 = (uint)FColor::White.field0_0x0 >> 0x10;
                uVar30 = (uint)FColor::White.field0_0x0 >> 0x18;
                FVar53 = FColor::White.field0_0x0;
              }
              else if (EVar45 == Triggered) {
                uVar32 = (uint)FColor::Green.field0_0x0 >> 0x10;
                uVar30 = (uint)FColor::Green.field0_0x0 >> 0x18;
                FVar53 = FColor::Green.field0_0x0;
              }
              else if (EVar45 == Started) {
                uVar32 = (uint)FColor::Orange.field0_0x0 >> 0x10;
                uVar30 = (uint)FColor::Orange.field0_0x0 >> 0x18;
                FVar53 = FColor::Orange.field0_0x0;
              }
              else if (EVar45 == Ongoing) {
                uVar32 = (uint)FColor::Yellow.field0_0x0 >> 0x10;
                uVar30 = (uint)FColor::Yellow.field0_0x0 >> 0x18;
                FVar53 = FColor::Yellow.field0_0x0;
              }
              else {
                if (EVar45 != Canceled) goto LAB_14a6fa89a;
                uVar32 = (uint)FColor::Red.field0_0x0 >> 0x10;
                uVar30 = (uint)FColor::Red.field0_0x0 >> 0x18;
                FVar53 = FColor::Red.field0_0x0;
              }
              *(float *)&(local_7a0->DebugTextItem)._padding_ = (float)(uVar32 & 0xff) * fVar23;
              *(float *)((longlong)&(local_7a0->DebugTextItem)._padding_ + 4) =
                   (float)(FVar53.Bits >> 8 & 0xff) * fVar23;
              *(float *)&(local_7a0->DebugTextItem)._padding_ = (float)(FVar53.Bits & 0xff) * fVar23
              ;
              *(float *)((longlong)&(local_7a0->DebugTextItem)._padding_ + 4) =
                   (float)uVar30 * fVar23;
              ::FString::FString(&local_650,L"    Action: ");
              local_5b8 = (FName)pUVar8->_padding_;
              pFVar40 = ::FName::ToString(&local_5b8,&local_2b0);
              iVar59 = (pFVar40->Data).ArrayNum;
              iVar60 = 0;
              iVar31 = iVar59 + -1;
              if (iVar59 == 0) {
                iVar31 = iVar60;
              }
              ::FString::AppendChars
                        (&local_650,(wchar_t *)(pFVar40->Data).AllocatorInstance.Data,iVar31);
              if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
              }
              if (pFVar43 != (FInputActionInstance *)0x0) {
                if (UE::EnhancedInput::bAlwaysGetRealValueFromActionInstanceData == false) {
                  if (pFVar43->TriggerEvent == Triggered) {
                    local_208 = *(undefined1 (*) [16])
                                 ((longlong)&(pFVar43->Value).Value.field0_0x0 + 0x10);
                    local_218 = *(undefined1 (*) [16])&(pFVar43->Value).Value.field0_0x0;
                  }
                  else {
                    EStack_4a0 = (pFVar43->Value).ValueType;
                    local_4a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    local_4b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
                    if ((EStack_4a0 == Boolean) || (EStack_4a0 == Axis1D)) {
                      local_4b8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
                      local_4b8._8_8_ = 0;
LAB_14a6fa9e8:
                      local_4a8 = 0.0;
                    }
                    else if (EStack_4a0 == Axis2D) goto LAB_14a6fa9e8;
                    local_208[8] = EStack_4a0;
                    local_208._0_8_ = local_4a8;
                    local_208._9_7_ = uStack_49f;
                    local_218 = local_4b8;
                  }
                }
                else {
                  local_208 = *(undefined1 (*) [16])
                               ((longlong)&(pFVar43->Value).Value.field0_0x0 + 0x10);
                  local_218 = *(undefined1 (*) [16])&(pFVar43->Value).Value.field0_0x0;
                }
                cVar28 = local_208[8];
                if (cVar28 == '\0') {
                  pwVar51 = L"false";
                  if (dVar24 <= local_218._8_8_ * local_218._8_8_ +
                                local_218._0_8_ * local_218._0_8_ +
                                local_208._0_8_ * local_208._0_8_) {
                    pwVar51 = L"true";
                  }
                  ::FString::FString(&local_768,pwVar51);
                }
                else if (cVar28 == '\x01') {
                  ::FString::PrintfImpl(&local_768,L"%3.3f");
                }
                else if (cVar28 == '\x02') {
                  ::FString::PrintfImpl(&local_768,L"X=%3.3f Y=%3.3f");
                }
                else if (cVar28 == '\x03') {
                  ::FString::PrintfImpl(&local_768,L"X=%3.3f Y=%3.3f Z=%3.3f");
                }
                else {
                  bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("false",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Public\\InputActionValue.h"
                                      ,0xbf,L"Unsupported value type for input action value!");
                  if (bVar27) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  local_768.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_768.Data.ArrayNum = 0;
                  local_768.Data.ArrayMax = 0;
                }
                EVar45 = pFVar43->TriggerEvent;
                local_3a8 = L"EnhancedInput.ETriggerEvent";
                iStack_3a0 = 0x1b;
                pUVar44 = Z_Construct_UClass_UEnum_NoRegister();
                local_298._12_4_ = uStack_39c;
                local_298.Size = iStack_3a0;
                local_298.DataPtr = local_3a8;
                this_01 = (UEnum *)StaticFindObject(pUVar44,(UObject *)0x0,&local_298,None);
                if (this_01 == (UEnum *)0x0) {
                  UE::Logging::Private::BasicFatalLog
                            ((FStaticBasicLogRecord *)
                             &`private:_static_class_FString___cdecl_UEnum::GetValueAsString_Internal(wchar_t_const*___ptr64,__int64)'
                              ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
                }
                UEnum::GetNameStringByValue(this_01,&local_540,(ulonglong)EVar45);
                ::FString::PrintfImpl(&local_550,L" - %s - %.3fs (%s)");
                iVar59 = local_550.Data.ArrayNum + -1;
                if (local_550.Data.ArrayNum == 0) {
                  iVar59 = iVar60;
                }
                ::FString::AppendChars
                          (&local_650,(wchar_t *)local_550.Data.AllocatorInstance.Data,iVar59);
                if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_550.Data.AllocatorInstance.Data);
                }
                if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_540.Data.AllocatorInstance.Data);
                }
                if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_768.Data.AllocatorInstance.Data);
                }
                local_748 = (pFVar43->Triggers).ArrayNum;
                lVar42 = (longlong)local_748;
                pFVar55 = (pFVar43->Triggers).AllocatorInstance.Data;
                local_750.Data = (FScriptContainerElement *)0x0;
                if (local_748 == 0) {
                  local_744 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,local_748,0,&local_750,local_748,&local_744);
                  memcpy(local_750.Data,pFVar55,lVar42 << 3);
                }
                iVar59 = local_748;
                local_6b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_6b0.Data.ArrayNum = 0;
                local_6b0.Data.ArrayMax = 0;
                pFVar55 = local_750.Data + (longlong)local_748 * 8;
                FVar66.Data = local_750.Data;
                while( true ) {
                  if (local_748 != iVar59) {
                    local_7c8 = 0;
                    `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_7c8);
                  }
                  if (FVar66.Data == pFVar55) break;
                  plVar62 = *(longlong **)FVar66.Data;
                  if (plVar62 != (longlong *)0x0) {
                    (**(code **)(*plVar62 + 0x2d0))(plVar62,&local_520);
                    iVar31 = local_520.Data.ArrayNum + -1;
                    if (local_520.Data.ArrayNum == 0) {
                      iVar31 = iVar60;
                    }
                    if (iVar31 != 0) {
                      if (local_6b0.Data.ArrayNum < 2) {
                        uVar29 = uVar29 | 0x40;
                      }
                      else {
                        uVar29 = uVar29 | 0x80;
                      }
                      pFVar40 = local_278;
                      pcVar52 = "";
                      if (1 < local_6b0.Data.ArrayNum) {
                        pcVar52 = ", ";
                        pFVar40 = &local_288;
                      }
                      pFVar40 = ::FString::FString(pFVar40,pcVar52);
                      ::FString::ConcatFF(&local_530,pFVar40,&local_520);
                      iVar31 = local_530.Data.ArrayNum + -1;
                      if (local_530.Data.ArrayNum == 0) {
                        iVar31 = iVar60;
                      }
                      ::FString::AppendChars
                                (&local_6b0,(wchar_t *)local_530.Data.AllocatorInstance.Data,iVar31)
                      ;
                      if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_530.Data.AllocatorInstance.Data);
                      }
                      if (((char)uVar29 < '\0') &&
                         (uVar29 = uVar29 & 0xffffff7f,
                         local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                        FMemory::Free(local_288.Data.AllocatorInstance.Data);
                      }
                      if (((uVar29 & 0x40) != 0) &&
                         (uVar29 = uVar29 & 0xffffffbf,
                         local_278[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                         ) {
                        FMemory::Free(local_278[0].Data.AllocatorInstance.Data);
                      }
                    }
                    if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_520.Data.AllocatorInstance.Data);
                    }
                  }
                  FVar66.Data = FVar66.Data + 8;
                }
                if (local_6b0.Data.ArrayNum < 2) {
                  uVar29 = uVar29 | 0x400;
                  local_398.Data.ArrayNum = 0;
                  pFVar40 = &local_398;
                }
                else {
                  ::FString::FString(&local_388,"  Triggers: ");
                  uVar29 = uVar29 | 0x300;
                  ::FString::ConcatFF(&local_510,&local_388,&local_6b0);
                  pFVar40 = &local_510;
                  FVar61.Data = local_510.Data.AllocatorInstance.Data;
                }
                pFVar63 = local_7a0;
                (pFVar40->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar59 = (pFVar40->Data).ArrayNum;
                (pFVar40->Data).ArrayNum = 0;
                (pFVar40->Data).ArrayMax = 0;
                if (((uVar29 >> 10 & 1) != 0) &&
                   (uVar29 = uVar29 & 0xfffffbff,
                   local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_398.Data.AllocatorInstance.Data);
                }
                if (((uVar29 >> 9 & 1) != 0) &&
                   (uVar29 = uVar29 & 0xfffffdff,
                   local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_510.Data.AllocatorInstance.Data);
                }
                if (((uVar29 >> 8 & 1) != 0) &&
                   (uVar29 = uVar29 & 0xfffffeff,
                   local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_388.Data.AllocatorInstance.Data);
                }
                if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
                }
                if (local_750.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_750.Data);
                }
                iVar31 = iVar59 + -1;
                if (iVar59 == 0) {
                  iVar31 = iVar60;
                }
                ::FString::AppendChars(&local_650,(wchar_t *)FVar61.Data,iVar31);
                if (FVar61.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar61.Data);
                }
              }
              local_69c = 0.0;
              FDisplayDebugManager::DrawString(pFVar63,&local_650,&local_69c);
              iVar59 = (int)local_7b8;
              pFVar55 = local_7c0.Data + 1;
              pFVar58 = local_7c0.Data + (longlong)(int)local_7b8 * 0x18;
              while( true ) {
                if ((int)local_7b8 != iVar59) {
                  local_7c7[0] = 0;
                  `TCheckedPointerIterator<`IEnhancedInputSubsystemInterface::ShowMappingContextDebugInfo'::__l55::FDisplayLine,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(local_7c7);
                }
                if (pFVar55 + -1 == pFVar58) break;
                FVar5 = *pFVar55;
                bVar6 = pFVar55[-1].field_0x0;
                FVar7 = pFVar55[2];
                *(float *)&(pFVar63->DebugTextItem)._padding_ = (float)(byte)pFVar55[1] * fVar23;
                *(float *)((longlong)&(pFVar63->DebugTextItem)._padding_ + 4) =
                     (float)(byte)FVar5 * fVar23;
                *(float *)&(pFVar63->DebugTextItem)._padding_ = (float)bVar6 * fVar23;
                *(float *)((longlong)&(pFVar63->DebugTextItem)._padding_ + 4) =
                     (float)(byte)FVar7 * fVar23;
                local_6a0 = 0.0;
                FDisplayDebugManager::DrawString(pFVar63,(FString *)(pFVar55 + 7),&local_6a0);
                pFVar55 = pFVar55 + 0x18;
              }
              if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_650.Data.AllocatorInstance.Data);
              }
              DestructItems<_IEnhancedInputSubsystemInterface::ShowMappingContextDebugInfo_::__l55::FDisplayLine,int>
                        ((FDisplayLine *)local_7c0.Data,(int)local_7b8);
              if ((FColor_u_0 *)local_7c0.Data != (FColor_u_0 *)0x0) {
                FMemory::Free(local_7c0.Data);
              }
              uVar46 = local_740._8_8_ & 0xffffffff;
              FVar61.Data = local_770 + 8;
              uVar47 = (ulonglong)local_6e8;
            }
            local_160 = 0;
            local_7d4 = uVar29;
            if (local_168 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_168);
            }
            TSparseArray<TSparseSetElement<TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_1a8);
            if (local_740.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_740.AllocatorInstance.Data);
            }
            if (local_758 != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_758);
            }
          }
          TStack_4e0.UnvisitedBitMask = TStack_4e0.UnvisitedBitMask & ~TStack_4e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4e0);
        }
        local_c0 = 0;
        if (local_c8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_c8);
        }
        TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_108);
        local_158.HashSize = 0;
        if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_158.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_158.Elements);
      }
    }
  }
  return;
LAB_14a6fa030:
  if (*(int *)(lVar42 + 0x58) != iVar59) {
    local_7cb = 0;
    `TCheckedPointerIterator<UInputTrigger_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_7cb);
  }
  if (puVar57 == puVar2) {
    bVar27 = false;
    goto LAB_14a6fa071;
  }
  local_5e8 = (UInputTrigger *)*puVar57;
  bVar27 = UE::Core::Private::Function::
           TFunctionRefCaller<`IEnhancedInputSubsystemInterface::ShowMappingContextDebugInfo'::__l59::<lambda_6>,bool,UInputTrigger_const_*>
           ::Call(&local_7ca,&local_5e8);
  if (bVar27) goto LAB_14a6fa015;
  puVar57 = puVar57 + 1;
  goto LAB_14a6fa030;
LAB_14a6fa2d9:
  pFVar58 = pFVar58 + 0x50;
  if (pFVar58 == pFVar55 + (longlong)iVar59 * 0x50) goto LAB_14a6fa2e2;
  goto LAB_14a6fa294;
}

// StartContinuousInputInjectionForAction @ 14a6fb130

void __thiscall
IEnhancedInputSubsystemInterface::StartContinuousInputInjectionForAction
          (IEnhancedInputSubsystemInterface *this,UInputAction *param_1,FInputActionValue *param_2,
          TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  TObjectPtr<UInputAction_const_>_u_0 local_res10;
  TObjectPtr<UInputAction_const_>_u_0 *local_res18 [2];
  
  this_00 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
             *)(**(code **)(this->_padding_ + 0x118))();
  local_res10.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UInputAction *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    param_1 = local_res10.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  iVar4 = TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                    (this_00,uVar5,(TObjectPtr<UInputAction_const_> *)&local_res10.ObjectPtr);
  if ((iVar4 == -1) ||
     (lVar6 = (longlong)iVar4 * 0x50 + *(longlong *)&this_00->Elements, lVar6 == 0)) {
    local_res18[0] = &local_res10;
    TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TObjectPtr<UInputAction_const_>_&&>_>
              (this_00,(uint)local_res8,
               (TKeyInitializer<TObjectPtr<UInputAction_const_>_&&> *)(ulonglong)uVar5,
               (bool *)local_res18);
    lVar6 = (longlong)local_res8[0] * 0x50 + *(longlong *)&this_00->Elements;
  }
  dVar1 = (param_2->Value).field0_0x0._s_0.Y;
  dVar2 = (param_2->Value).field0_0x0._s_0.Z;
  uVar3 = *(undefined8 *)&param_2->ValueType;
  *(double *)(lVar6 + 8) = (param_2->Value).field0_0x0._s_0.X;
  *(double *)(lVar6 + 0x10) = dVar1;
  *(double *)(lVar6 + 0x18) = dVar2;
  *(undefined8 *)(lVar6 + 0x20) = uVar3;
  DeepCopyPtrArray<UInputModifier>
            (param_3,(TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *)
                     (lVar6 + 0x38));
  DeepCopyPtrArray<UInputTrigger>
            (param_4,(TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x28)
            );
  return;
}

// StartContinuousInputInjectionForPlayerMapping @ 14a6fb250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::StartContinuousInputInjectionForPlayerMapping
          (IEnhancedInputSubsystemInterface *this,FName param_1,FInputActionValue *param_2,
          TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UEnhancedInputUserSettings *this_00;
  UInputAction *pUVar1;
  FName local_res10;
  FString local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res10 = param_1;
  this_00 = (UEnhancedInputUserSettings *)(**(code **)(this->_padding_ + 0x18))();
  if (this_00 == (UEnhancedInputUserSettings *)0x0) {
    if (2 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  else {
    pUVar1 = UEnhancedInputUserSettings::FindInputActionForMapping(this_00,local_res10);
    if (pUVar1 != (UInputAction *)0x0) {
      local_28.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&(param_2->Value).field0_0x0;
      local_28.Data.AllocatorInstance.Data._4_4_ =
           *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 4);
      local_28.Data.ArrayNum = *(int *)((longlong)&(param_2->Value).field0_0x0 + 8);
      local_28.Data.ArrayMax = *(int *)((longlong)&(param_2->Value).field0_0x0 + 0xc);
      local_18 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x10);
      uStack_14 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x14);
      uStack_10 = *(undefined4 *)&param_2->ValueType;
      uStack_c = *(undefined4 *)&param_2->field_0x1c;
      (**(code **)(this->_padding_ + 0x60))(this,pUVar1,&local_28,param_3,param_4);
      return;
    }
    if (2 < (byte)LogEnhancedInput._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      if ((void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                           local_28.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                                       local_28.Data.AllocatorInstance.Data._0_4_));
        return;
      }
    }
  }
  return;
}

// StopContinuousInputInjectionForAction @ 14a6fb860

void __thiscall
IEnhancedInputSubsystemInterface::StopContinuousInputInjectionForAction
          (IEnhancedInputSubsystemInterface *this,UInputAction *param_1)

{
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar1;
  TObjectPtr<UInputAction_const_>_u_0 local_res8;
  
  this_00 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
             *)(**(code **)(this->_padding_ + 0x118))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
    ::RemoveImpl<TObjectPtr<UInputAction_const_>_>
              (this_00,uVar1 >> 0x10 ^ uVar1,
               (TObjectPtr<UInputAction_const_> *)&local_res8.ObjectPtr);
  }
  return;
}

// StopContinuousInputInjectionForPlayerMapping @ 14a6fb920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::StopContinuousInputInjectionForPlayerMapping
          (IEnhancedInputSubsystemInterface *this,FName param_1)

{
  UEnhancedInputUserSettings *this_00;
  UInputAction *pUVar1;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  this_00 = (UEnhancedInputUserSettings *)(**(code **)(this->_padding_ + 0x18))();
  if (this_00 == (UEnhancedInputUserSettings *)0x0) {
    if (2 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  else {
    pUVar1 = UEnhancedInputUserSettings::FindInputActionForMapping(this_00,local_res10[0]);
    if (pUVar1 != (UInputAction *)0x0) {
      (**(code **)(this->_padding_ + 0x80))(this,pUVar1);
      return;
    }
    if (2 < (byte)LogEnhancedInput._0_1_) {
      ::FName::ToString(local_res10,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// TickForcedInput @ 14a6fbb20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::TickForcedInput
          (IEnhancedInputSubsystemInterface *this,float param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FWeakObjectPtr FVar14;
  FWeakObjectPtr FVar15;
  FWeakObjectPtr FVar16;
  FWeakObjectPtr FVar17;
  longlong *plVar18;
  TMap<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>_>
  *pTVar19;
  TMap<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>_>
  *pTVar20;
  bool bVar21;
  FPlatformUserId FVar22;
  UEnhancedPlayerInput *this_00;
  longlong *plVar23;
  UObject *pUVar24;
  UClass *pUVar25;
  undefined4 extraout_var;
  longlong lVar26;
  int iVar27;
  FWeakObjectPtr *this_01;
  uint uVar28;
  APlayerController *this_02;
  uint uVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  undefined1 *puVar31;
  uint *puVar32;
  TMap<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>_>
  *pTVar33;
  TMap<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>_>
  *pTVar34;
  FInputActionValue *pFVar35;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_268 [8];
  ulonglong local_260;
  TMap<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>_>
  *local_258;
  int iStack_250;
  uint uStack_24c;
  undefined1 *local_248;
  undefined4 uStack_240;
  int iStack_23c;
  int local_238;
  int iStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  UEnhancedPlayerInput *local_228;
  longlong *local_220;
  int iStack_218;
  uint uStack_214;
  TBitArray<FDefaultBitArrayAllocator> *local_210;
  undefined4 uStack_208;
  int iStack_204;
  int local_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  UObject *local_1d8;
  UObject *local_1d0;
  TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> local_1b8;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  TMap<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TMap<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  FKey local_118;
  FKey local_100;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  TVector<double>_u_0 local_c8;
  FWeakObjectPtr FStack_b0;
  undefined4 local_8c;
  undefined4 local_6c;
  
  this_00 = (UEnhancedPlayerInput *)(**(code **)(this->_padding_ + 0x10))();
  if (this_00 == (UEnhancedPlayerInput *)0x0) {
    return;
  }
  local_228 = this_00;
  plVar23 = (longlong *)(**(code **)(this->_padding_ + 0x118))(this);
  iStack_218 = 0;
  local_200 = 0;
  iVar6 = (int)plVar23[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar23 + 2);
  local_260 = 1;
  uStack_214 = 1;
  iStack_204 = 0;
  if (iVar6 != 0) {
    pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)plVar23[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar23[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar30 = pTVar1;
    }
    uStack_214 = *(uint *)(pTVar30->AllocatorInstance).InlineData;
    while (uStack_214 == 0) {
      iStack_218 = iStack_218 + 1;
      local_200 = local_200 + 0x20;
      uStack_214 = 1;
      iStack_204 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_218) goto LAB_14a6fbc1c;
      uStack_214 = *(uint *)((pTVar30->AllocatorInstance).InlineData + (longlong)iStack_218 * 4);
    }
    uStack_214 = ~(uStack_214 - 1) & uStack_214;
    uVar3 = (ulonglong)uStack_214 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_1f0 = (int)lVar8;
    iStack_204 = local_200 + -1 + local_1f0;
    if (iVar6 < iStack_204) {
      iStack_204 = iVar6;
    }
  }
LAB_14a6fbc1c:
  uVar29 = *(uint *)(plVar23 + 5);
  uStack_1fc = local_8c;
  uVar28 = uVar29 & 0xffffffe0;
  iStack_1f8 = (int)plVar23[1] - *(int *)((longlong)plVar23 + 0x34);
  TStack_1a0._padding_ = CONCAT44(uStack_214,iStack_218);
  uStack_208 = 0xffffffff;
  TStack_1a0.CurrentBitIndex = iStack_204;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)uVar29 >> 5;
  TStack_1a0._28_4_ = local_8c;
  TStack_1a0.BaseBitIndex = local_200;
  uStack_180 = CONCAT44(uStack_1f4,iStack_1f8);
  local_220 = plVar23;
  local_210 = pTVar1;
  local_1a8 = plVar23;
  TStack_1a0.Array = pTVar1;
  if ((((int)uVar29 < 0) || (iVar6 < (int)uVar29)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar21)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)(plVar23 + 5);
  if (uVar29 != uVar5) {
    pTVar30 = pTVar1;
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar23[4] !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)plVar23[4];
    }
    uVar29 = -1 << ((byte)uVar29 & 0x1f) &
             *(uint *)((pTVar30->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
    while (uVar29 == 0) {
      iVar27 = iVar27 + 1;
      uVar28 = uVar28 + 0x20;
      uVar29 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar27) goto LAB_14a6fbd30;
      uVar29 = *(uint *)((pTVar30->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
    }
    uVar3 = (ulonglong)(~(uVar29 - 1) & uVar29) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_1ec = (int)lVar8;
    uVar29 = local_1ec + -1 + uVar28;
    if ((int)uVar5 < (int)uVar29) {
      uVar29 = uVar5;
    }
  }
LAB_14a6fbd30:
  while( true ) {
    plVar18 = local_1a8;
    if ((int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34) != (int)uStack_180) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_1a0.CurrentBitIndex == uVar29) && (TStack_1a0.Array == pTVar1)) &&
       (plVar18 == plVar23)) break;
    lVar8 = *plVar18;
    lVar26 = (longlong)TStack_1a0.CurrentBitIndex * 0x50;
    pUVar24 = *(UObject **)(lVar26 + lVar8);
    if (pUVar24 != (UObject *)0x0) {
      pdVar4 = (double *)(lVar26 + 8 + lVar8);
      dVar10 = *pdVar4;
      dVar11 = pdVar4[1];
      pdVar4 = (double *)(lVar26 + 0x18 + lVar8);
      dVar12 = *pdVar4;
      dVar13 = pdVar4[1];
      local_1d8 = pUVar24;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar24);
      }
      local_e8._s_0.X = dVar10;
      local_e8._s_0.Y = dVar11;
      local_e8._s_0.Z = dVar12;
      dStack_d0 = dVar13;
      UEnhancedPlayerInput::InjectInputForAction
                (this_00,(TObjectPtr<UInputAction_const_>)&local_1d8,
                 (FInputActionValue *)&local_e8._s_0,
                 (TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *)(lVar26 + lVar8 + 0x38),
                 (TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x28 + lVar26));
    }
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
  }
  iStack_250 = 0;
  pTVar34 = &this->ForcedActions;
  iVar6 = *(int *)&(this->ForcedActions).field_0x28;
  puVar2 = &(this->ForcedActions).field_0x10;
  local_238 = 0;
  uStack_24c = (uint)local_260;
  iStack_23c = 0;
  if (iVar6 != 0) {
    puVar32 = *(uint **)&(this->ForcedActions).field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)puVar2;
    }
    uVar29 = *puVar32;
    while (uVar29 == 0) {
      iStack_250 = iStack_250 + 1;
      local_238 = local_238 + 0x20;
      iStack_23c = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_250) goto LAB_14a6fbe6c;
      uVar29 = puVar32[iStack_250];
    }
    uStack_24c = ~(uVar29 - 1) & uVar29;
    uVar3 = (ulonglong)uStack_24c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_1e8 = (int)lVar8;
    iStack_23c = local_238 + -1 + local_1e8;
    if (iVar6 < iStack_23c) {
      iStack_23c = iVar6;
    }
  }
LAB_14a6fbe6c:
  uVar29 = *(uint *)&(this->ForcedActions).field_0x28;
  iStack_234 = local_6c;
  uVar28 = uVar29 & 0xffffffe0;
  iStack_230 = *(int *)&(this->ForcedActions).field_0x8 - *(int *)&(this->ForcedActions).field_0x34;
  TStack_170._padding_ = CONCAT44(uStack_24c,iStack_250);
  uStack_240 = 0xffffffff;
  TStack_170.CurrentBitIndex = iStack_23c;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)uVar29 >> 5;
  TStack_170._28_4_ = local_6c;
  TStack_170.BaseBitIndex = local_238;
  uStack_150 = CONCAT44(uStack_22c,iStack_230);
  local_258 = pTVar34;
  local_248 = puVar2;
  local_178 = pTVar34;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar29 < 0) || (iVar6 < (int)uVar29)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar21)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)&(this->ForcedActions).field_0x28;
  if (uVar29 != uVar5) {
    puVar7 = *(undefined1 **)&(this->ForcedActions).field_0x20;
    puVar31 = puVar2;
    if (puVar7 != (undefined1 *)0x0) {
      puVar31 = puVar7;
    }
    uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar27 * 4);
    while (uVar29 == 0) {
      iVar27 = iVar27 + 1;
      uVar28 = uVar28 + 0x20;
      uVar29 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar27) goto LAB_14a6fbf80;
      uVar29 = *(uint *)(puVar31 + (longlong)iVar27 * 4);
    }
    uVar3 = (ulonglong)(~(uVar29 - 1) & uVar29) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_1e4 = (int)lVar8;
    uVar29 = (uVar28 - 1) + local_1e4;
    if ((int)uVar5 < (int)uVar29) {
      uVar29 = uVar5;
    }
  }
LAB_14a6fbf80:
  while( true ) {
    pTVar19 = local_178;
    if (*(int *)&local_178->field_0x8 - *(int *)&local_178->field_0x34 != (int)uStack_150) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_170.CurrentBitIndex == uVar29) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar19 == pTVar34)) break;
    this_01 = (FWeakObjectPtr *)(*(longlong *)pTVar19 + (longlong)TStack_170.CurrentBitIndex * 0x30)
    ;
    pUVar24 = FWeakObjectPtr::Get(this_01);
    if (pUVar24 != (UObject *)0x0) {
      FVar14 = this_01[1];
      FVar15 = this_01[2];
      FVar16 = this_01[3];
      FVar17 = this_01[4];
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 0;
      local_1c8.ArrayMax = 0;
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.ArrayNum = 0;
      local_1b8.ArrayMax = 0;
      local_1d0 = pUVar24;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar24);
      }
      local_c8._s_0.X = (double)FVar14;
      local_c8._s_0.Y = (double)FVar15;
      local_c8._s_0.Z = (double)FVar16;
      FStack_b0 = FVar17;
      UEnhancedPlayerInput::InjectInputForAction
                (this_00,(TObjectPtr<UInputAction_const_>)&local_1d0,
                 (FInputActionValue *)&local_c8._s_0,&local_1b8,&local_1c8);
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
  iStack_250 = 0;
  pTVar33 = &this->ForcedKeys;
  iVar6 = *(int *)&(this->ForcedKeys).field_0x28;
  puVar2 = &(this->ForcedKeys).field_0x10;
  local_238 = 0;
  iStack_23c = 0;
  if (iVar6 != 0) {
    puVar32 = *(uint **)&(this->ForcedKeys).field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)puVar2;
    }
    uVar29 = *puVar32;
    while (uVar29 == 0) {
      iStack_250 = iStack_250 + 1;
      local_238 = local_238 + 0x20;
      iStack_23c = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_250) goto LAB_14a6fc0df;
      uVar29 = puVar32[iStack_250];
    }
    local_260 = (ulonglong)(~(uVar29 - 1) & uVar29);
    uVar3 = local_260 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_1e0 = (int)lVar8;
    iStack_23c = local_1e0 + -1 + local_238;
    if (iVar6 < iStack_23c) {
      iStack_23c = iVar6;
    }
  }
LAB_14a6fc0df:
  uVar29 = *(uint *)&(this->ForcedKeys).field_0x28;
  uStack_24c = (uint)local_260;
  uVar28 = uVar29 & 0xffffffe0;
  iStack_234 = iStack_204;
  iStack_230 = *(int *)&(this->ForcedKeys).field_0x8 - *(int *)&(this->ForcedKeys).field_0x34;
  TStack_140._padding_ = CONCAT44(uStack_24c,iStack_250);
  uStack_240 = 0xffffffff;
  TStack_140.CurrentBitIndex = iStack_23c;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)uVar29 >> 5;
  TStack_140._28_4_ = iStack_204;
  TStack_140.BaseBitIndex = local_238;
  uStack_120 = CONCAT44(uStack_22c,iStack_230);
  local_258 = (TMap<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>_>
               *)pTVar33;
  local_248 = puVar2;
  local_148 = pTVar33;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar29 < 0) || (iVar6 < (int)uVar29)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar21)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)&(this->ForcedKeys).field_0x28;
  if (uVar29 != uVar5) {
    puVar7 = *(undefined1 **)&(this->ForcedKeys).field_0x20;
    puVar31 = puVar2;
    if (puVar7 != (undefined1 *)0x0) {
      puVar31 = puVar7;
    }
    uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar27 * 4);
    while (uVar29 == 0) {
      iVar27 = iVar27 + 1;
      uVar28 = uVar28 + 0x20;
      uVar29 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar27) goto LAB_14a6fc1f0;
      uVar29 = *(uint *)(puVar31 + (longlong)iVar27 * 4);
    }
    uVar3 = (ulonglong)(~(uVar29 - 1) & uVar29) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar29 = (int)lVar8 + -1 + uVar28;
    if ((int)uVar5 < (int)uVar29) {
      uVar29 = uVar5;
    }
  }
LAB_14a6fc1f0:
  do {
    pTVar20 = local_148;
    if (*(int *)&local_148->field_0x8 - *(int *)&local_148->field_0x34 != (int)uStack_120) {
      `TSparseArray<TSparseSetElement<TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_268);
    }
    if (((TStack_140.CurrentBitIndex == uVar29) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar20 == pTVar33)) {
      return;
    }
    lVar8 = *(longlong *)pTVar20;
    lVar26 = (longlong)TStack_140.CurrentBitIndex * 0x60;
    this_02 = (APlayerController *)local_228->_padding_;
    if (this_02 == (APlayerController *)0x0) {
LAB_14a6fc25d:
      this_02 = (APlayerController *)0x0;
    }
    else {
      pUVar25 = Z_Construct_UClass_APlayerController_NoRegister();
      iVar6 = (int)pUVar25->_padding_;
      if ((*(int *)(this_02->_padding_ + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar25->_padding_)) goto LAB_14a6fc25d;
    }
    if (this_02 == (APlayerController *)0x0) {
      local_100.KeyName = *(FName *)(lVar26 + lVar8);
      local_100.KeyDetails.Object = *(FKeyDetails **)(lVar26 + 8 + lVar8);
      local_100.KeyDetails.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar26 + 0x10 + lVar8);
      if (local_100.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_100.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_100.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar35 = (FInputActionValue *)(lVar8 + 0x18 + lVar26);
      InjectKey<UEnhancedPlayerInput>
                (local_228,&local_100,pFVar35,param_1,(FPlatformUserId)0xffffffff,IE_Pressed);
    }
    else {
      FVar22 = APlayerController::GetPlatformUserId(this_02);
      local_118.KeyName = *(FName *)(lVar26 + lVar8);
      FVar22.InternalId = *(int *)CONCAT44(extraout_var,FVar22.InternalId);
      local_118.KeyDetails.Object = *(FKeyDetails **)(lVar26 + 8 + lVar8);
      local_118.KeyDetails.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar26 + 0x10 + lVar8);
      if (local_118.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_118.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar35 = (FInputActionValue *)(lVar8 + 0x18 + lVar26);
      InjectKey<APlayerController>(this_02,&local_118,pFVar35,param_1,FVar22,IE_Pressed);
    }
    dVar10 = (pFVar35->Value).field0_0x0._s_0.Y;
    dVar11 = (pFVar35->Value).field0_0x0._s_0.Z;
    dVar12 = *(double *)&pFVar35->ValueType;
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    pdVar4 = (double *)(lVar26 + 0x38 + lVar8);
    *pdVar4 = (pFVar35->Value).field0_0x0._s_0.X;
    pdVar4[1] = dVar10;
    pdVar4 = (double *)(lVar26 + 0x48 + lVar8);
    *pdVar4 = dVar11;
    pdVar4[1] = dVar12;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  } while( true );
}

// UpdateValueOfContinuousInputInjectionForAction @ 14a701020

void __thiscall
IEnhancedInputSubsystemInterface::UpdateValueOfContinuousInputInjectionForAction
          (IEnhancedInputSubsystemInterface *this,UInputAction *param_1,FInputActionValue *param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  TObjectPtr<UInputAction_const_>_u_0 local_res10;
  TObjectPtr<UInputAction_const_>_u_0 *local_res18 [2];
  
  this_00 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
             *)(**(code **)(this->_padding_ + 0x118))();
  local_res10.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UInputAction *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    param_1 = local_res10.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  iVar4 = TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                    (this_00,uVar5,(TObjectPtr<UInputAction_const_> *)&local_res10.ObjectPtr);
  if ((iVar4 == -1) ||
     (lVar6 = (longlong)iVar4 * 0x50 + *(longlong *)&this_00->Elements, lVar6 == 0)) {
    local_res18[0] = &local_res10;
    TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TObjectPtr<UInputAction_const_>_&&>_>
              (this_00,(uint)local_res8,
               (TKeyInitializer<TObjectPtr<UInputAction_const_>_&&> *)(ulonglong)uVar5,
               (bool *)local_res18);
    lVar6 = (longlong)local_res8[0] * 0x50 + *(longlong *)&this_00->Elements;
  }
  dVar1 = (param_2->Value).field0_0x0._s_0.Y;
  dVar2 = (param_2->Value).field0_0x0._s_0.Z;
  uVar3 = *(undefined8 *)&param_2->ValueType;
  *(double *)(lVar6 + 8) = (param_2->Value).field0_0x0._s_0.X;
  *(double *)(lVar6 + 0x10) = dVar1;
  *(double *)(lVar6 + 0x18) = dVar2;
  *(undefined8 *)(lVar6 + 0x20) = uVar3;
  return;
}

// UpdateValueOfContinuousInputInjectionForPlayerMapping @ 14a701120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::UpdateValueOfContinuousInputInjectionForPlayerMapping
          (IEnhancedInputSubsystemInterface *this,FName param_1,FInputActionValue *param_2)

{
  UEnhancedInputUserSettings *this_00;
  UInputAction *pUVar1;
  FName local_res10 [3];
  FString local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res10[0] = param_1;
  this_00 = (UEnhancedInputUserSettings *)(**(code **)(this->_padding_ + 0x18))();
  if (this_00 == (UEnhancedInputUserSettings *)0x0) {
    if (2 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  else {
    pUVar1 = UEnhancedInputUserSettings::FindInputActionForMapping(this_00,local_res10[0]);
    if (pUVar1 != (UInputAction *)0x0) {
      local_28.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&(param_2->Value).field0_0x0;
      local_28.Data.AllocatorInstance.Data._4_4_ =
           *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 4);
      local_28.Data.ArrayNum = *(int *)((longlong)&(param_2->Value).field0_0x0 + 8);
      local_28.Data.ArrayMax = *(int *)((longlong)&(param_2->Value).field0_0x0 + 0xc);
      local_18 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x10);
      uStack_14 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x14);
      uStack_10 = *(undefined4 *)&param_2->ValueType;
      uStack_c = *(undefined4 *)&param_2->field_0x1c;
      (**(code **)(this->_padding_ + 0x70))(this,pUVar1,&local_28);
      return;
    }
    if (2 < (byte)LogEnhancedInput._0_1_) {
      ::FName::ToString(local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      if ((void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                           local_28.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                                       local_28.Data.AllocatorInstance.Data._0_4_));
        return;
      }
    }
  }
  return;
}

// ValidateTrackedMappingContextsAreUnregistered @ 14a701210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IEnhancedInputSubsystemInterface::ValidateTrackedMappingContextsAreUnregistered
          (IEnhancedInputSubsystemInterface *this)

{
  longlong *plVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  UPackage *pUVar11;
  UEnum *this_00;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  int iVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FName local_res20;
  undefined4 uStack_ac;
  FName local_a8;
  FString local_a0;
  FString local_90;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  lVar10 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar10 != 0) {
    iVar15 = 0;
    iVar17 = 0;
    uVar8 = 1;
    plVar1 = (longlong *)(lVar10 + 0x588);
    pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar10 + 0x598);
    iVar5 = *(int *)(lVar10 + 0x5b0);
    iVar9 = 0;
    if (iVar5 != 0) {
      pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar10 + 0x5a8);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar10 + 0x5a8) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = pTVar2;
      }
      uVar14 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar15 + 1;
        iVar9 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a7012ed;
        uVar14 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar8 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar8 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iVar9 = iVar17 + -1 + local_res10;
      if (iVar5 < iVar9) {
        iVar9 = iVar5;
      }
    }
LAB_14a7012ed:
    uVar14 = *(uint *)(lVar10 + 0x5b0);
    uVar13 = uVar14 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uVar8,iVar15);
    TStack_78.CurrentBitIndex = iVar9;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_78._28_4_ = iVar9;
    TStack_78.BaseBitIndex = iVar17;
    uStack_58 = CONCAT44(uStack_ac,*(int *)(lVar10 + 0x590) - *(int *)(lVar10 + 0x5bc));
    local_80 = plVar1;
    TStack_78.Array = pTVar2;
    if ((((int)uVar14 < 0) || (iVar5 < (int)uVar14)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = *(uint *)(lVar10 + 0x5b0);
    if (uVar14 != uVar8) {
      pTVar16 = pTVar2;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar10 + 0x5a8) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar10 + 0x5a8);
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) &
               *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar15;
        uVar13 = uVar13 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14a701400;
        uVar14 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res18 = (int)lVar10;
      uVar14 = local_res18 + -1 + uVar13;
      if ((int)uVar8 < (int)uVar14) {
        uVar14 = uVar8;
      }
    }
LAB_14a701400:
    while( true ) {
      plVar3 = local_80;
      if ((int)local_80[1] - *(int *)((longlong)local_80 + 0x34) != (int)uStack_58) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_78.CurrentBitIndex == uVar14) && (TStack_78.Array == pTVar2)) &&
         (plVar3 == plVar1)) break;
      lVar10 = *plVar3;
      plVar3 = (longlong *)(lVar10 + (longlong)TStack_78.CurrentBitIndex * 0x18);
      lVar10 = *(longlong *)(lVar10 + (longlong)TStack_78.CurrentBitIndex * 0x18);
      if (((lVar10 != 0) && ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)) &&
         ((*(char *)(*plVar3 + 0xf0) != '\0' && (2 < (byte)LogEnhancedInput._0_1_)))) {
        this_00 = Z_Registration_Info_UEnum_EMappingContextRegistrationTrackingMode.OuterSingleton;
        if (Z_Registration_Info_UEnum_EMappingContextRegistrationTrackingMode.OuterSingleton ==
            (UEnum *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_EnhancedInput();
          this_00 = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EMappingContextRegistrationTrackingMode
                                  ,(UObject *)pUVar11,L"EMappingContextRegistrationTrackingMode");
          Z_Registration_Info_UEnum_EMappingContextRegistrationTrackingMode.OuterSingleton = this_00
          ;
          if ((this_00 == (UEnum *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("EnumClass != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xca4,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        UEnum::GetNameByValue(this_00,(long64)&local_res20);
        ::FName::ToString(&local_res20,&local_90);
        local_a8 = *(FName *)(*plVar3 + 0x18);
        ::FName::ToString(&local_a8,&local_a0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return;
}

// _getUObject @ 14a702ff0

UObject * __thiscall
IEnhancedInputSubsystemInterface::_getUObject(IEnhancedInputSubsystemInterface *this)

{
  return (UObject *)0x0;
}

// execAddMappingContext @ 14a7032f0

void __cdecl
IEnhancedInputSubsystemInterface::execAddMappingContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_res8 [8];
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_res8[0] = local_res8[0] & 0xf9 | 1;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x98))(param_1,local_res20,local_res10[0],pbVar2);
  return;
}

// execAddTagToInputMode @ 14a703410

void __cdecl
IEnhancedInputSubsystemInterface::execAddTagToInputMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  byte *pbVar4;
  byte local_res8 [8];
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar3 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar3 = puVar1;
  }
  local_res8[0] = local_res8[0] & 0xf9 | 1;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xc0))(param_1,puVar3,pbVar4);
  return;
}

// execAppendTagsToInputMode @ 14a703510

void __cdecl
IEnhancedInputSubsystemInterface::execAppendTagsToInputMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  void **ppvVar3;
  byte *pbVar4;
  byte local_res8 [8];
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar3 = &local_28;
  if (ppvVar1 != (void **)0x0) {
    ppvVar3 = ppvVar1;
  }
  local_res8[0] = local_res8[0] & 0xf9 | 1;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xb8))(param_1,ppvVar3,pbVar4);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execClearAllMappings @ 14a7038b0

void __cdecl
IEnhancedInputSubsystemInterface::execClearAllMappings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a7038c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x90))();
  return;
}

// execGetAllPlayerMappableActionKeyMappings @ 14a704470

void __cdecl
IEnhancedInputSubsystemInterface::execGetAllPlayerMappableActionKeyMappings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FEnhancedActionKeyMapping *local_18;
  int local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x108))(param_1,&local_18);
  if (param_3 != puVar1) {
    DestructItems<FEnhancedActionKeyMapping,int>
              (*(FEnhancedActionKeyMapping **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  DestructItems<FEnhancedActionKeyMapping,int>(local_18,local_10);
  if (local_18 != (FEnhancedActionKeyMapping *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetInputMode @ 14a704a00

void __cdecl
IEnhancedInputSubsystemInterface::execGetInputMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGameplayTagContainer *pFVar1;
  void *local_28 [2];
  void *local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = (FGameplayTagContainer *)(**(code **)(*(longlong *)param_1 + 0xa8))(param_1,local_28);
  FGameplayTagContainer::operator=(param_3,pFVar1);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return;
}

// execGetUserSettings @ 14a7055f0

void __cdecl
IEnhancedInputSubsystemInterface::execGetUserSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x18))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execHasMappingContext @ 14a705790

void __cdecl
IEnhancedInputSubsystemInterface::execHasMappingContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xf0))(param_1,local_res10,puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execInjectInputForAction @ 14a705880

void __cdecl
IEnhancedInputSubsystemInterface::execInjectInputForAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  undefined8 local_res8;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uStack_40 = uStack_40 & 0xffffff00;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  ppvVar3 = &local_68;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  ppvVar2 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x40))(param_1,local_res8,&local_38,ppvVar3,ppvVar2);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execInjectInputForPlayerMapping @ 14a705a50

void __cdecl
IEnhancedInputSubsystemInterface::execInjectInputForPlayerMapping
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  undefined8 local_res8;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uStack_40 = uStack_40 & 0xffffff00;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  ppvVar3 = &local_68;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  ppvVar2 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x50))(param_1,local_res8,&local_38,ppvVar3,ppvVar2);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execInjectInputVectorForAction @ 14a705c20

void __cdecl
IEnhancedInputSubsystemInterface::execInjectInputVectorForAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  undefined8 local_res8;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  ppvVar3 = &local_68;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  ppvVar2 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_28 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x48))(param_1,local_res8,&local_38,ppvVar3,ppvVar2);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execInjectInputVectorForPlayerMapping @ 14a705de0

void __cdecl
IEnhancedInputSubsystemInterface::execInjectInputVectorForPlayerMapping
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  undefined8 local_res8;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  ppvVar3 = &local_68;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  ppvVar2 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_28 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x58))(param_1,local_res8,&local_38,ppvVar3,ppvVar2);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execOnUserKeyProfileChanged @ 14a706aa0

void __cdecl
IEnhancedInputSubsystemInterface::execOnUserKeyProfileChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_res8);
  return;
}

// execOnUserSettingsChanged @ 14a706b30

void __cdecl
IEnhancedInputSubsystemInterface::execOnUserSettingsChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_res8);
  return;
}

// execQueryKeysMappedToAction @ 14a706bc0

void __cdecl
IEnhancedInputSubsystemInterface::execQueryKeysMappedToAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  FKey *local_18;
  int local_10;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x100))(param_1,&local_18,local_res8);
  if (param_3 != puVar2) {
    DestructItems<FKey,int>(*(FKey **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  DestructItems<FKey,int>(local_18,local_10);
  if (local_18 != (FKey *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execQueryMapKeyInActiveContextSet @ 14a706cc0

void __cdecl
IEnhancedInputSubsystemInterface::execQueryMapKeyInActiveContextSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  void **ppvVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  TReferenceControllerBase<1> *pTStack_48;
  undefined8 local_40;
  undefined8 local_38;
  TReferenceControllerBase<1> *local_30;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = 0;
  local_50 = 0;
  pTStack_48 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res8[0] = 0;
  ppvVar4 = &local_68;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0xe0);
  local_40 = local_58;
  local_38 = local_50;
  local_30 = pTStack_48;
  if (pTStack_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_48->SharedReferenceCount = (atomic<int>)((int)pTStack_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(param_1,local_res18,local_res10,&local_40,ppvVar4,local_res8[0]);
  *(undefined1 *)param_3 = uVar3;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  return;
}

// execQueryMapKeyInContextSet @ 14a706ec0

void __cdecl
IEnhancedInputSubsystemInterface::execQueryMapKeyInContextSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  void **ppvVar4;
  void **ppvVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18 [2];
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  TReferenceControllerBase<1> *pTStack_58;
  undefined8 local_50;
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  
  local_78 = (void *)0x0;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res18[0] = 0;
  ppvVar5 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_68 = 0;
  local_60 = 0;
  pTStack_58 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_88 = (void *)0x0;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res8[0] = 0;
  ppvVar4 = &local_88;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0xe8);
  local_50 = local_68;
  local_48 = local_60;
  local_40 = pTStack_58;
  if (pTStack_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_58->SharedReferenceCount = (atomic<int>)((int)pTStack_58->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(param_1,ppvVar5,local_res18[0],local_res10,&local_50,ppvVar4,local_res8[0]);
  *(undefined1 *)param_3 = uVar3;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execRemoveMappingContext @ 14a707620

void __cdecl
IEnhancedInputSubsystemInterface::execRemoveMappingContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_res8 [8];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_res8[0] = local_res8[0] & 0xf9 | 1;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xa0))(param_1,local_res10,pbVar2);
  return;
}

// execRemoveTagFromInputMode @ 14a707710

void __cdecl
IEnhancedInputSubsystemInterface::execRemoveTagFromInputMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  byte *pbVar4;
  byte local_res8 [8];
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar3 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar3 = puVar1;
  }
  local_res8[0] = local_res8[0] & 0xf9 | 1;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xd0))(param_1,puVar3,pbVar4);
  return;
}

// execRemoveTagsFromInputMode @ 14a707810

void __cdecl
IEnhancedInputSubsystemInterface::execRemoveTagsFromInputMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  void **ppvVar3;
  byte *pbVar4;
  byte local_res8 [8];
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar3 = &local_28;
  if (ppvVar1 != (void **)0x0) {
    ppvVar3 = ppvVar1;
  }
  local_res8[0] = local_res8[0] & 0xf9 | 1;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 200))(param_1,ppvVar3,pbVar4);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execRequestRebuildControlMappings @ 14a707940

void __cdecl
IEnhancedInputSubsystemInterface::execRequestRebuildControlMappings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_res8[0] = local_res8[0] & 0xf9 | 1;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  pbVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xd8))(param_1,pbVar2,local_res10[0]);
  return;
}

// execSetInputMode @ 14a7081c0

void __cdecl
IEnhancedInputSubsystemInterface::execSetInputMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  void **ppvVar3;
  byte *pbVar4;
  byte local_res8 [8];
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar3 = &local_28;
  if (ppvVar1 != (void **)0x0) {
    ppvVar3 = ppvVar1;
  }
  local_res8[0] = local_res8[0] & 0xf9 | 1;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xb0))(param_1,ppvVar3,pbVar4);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execStartContinuousInputInjectionForAction @ 14a708360

void __cdecl
IEnhancedInputSubsystemInterface::execStartContinuousInputInjectionForAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  undefined8 local_res8;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uStack_40 = uStack_40 & 0xffffff00;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  ppvVar3 = &local_68;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  ppvVar2 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x60))(param_1,local_res8,&local_38,ppvVar3,ppvVar2);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execStartContinuousInputInjectionForPlayerMapping @ 14a708530

void __cdecl
IEnhancedInputSubsystemInterface::execStartContinuousInputInjectionForPlayerMapping
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  undefined8 local_res8;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uStack_40 = uStack_40 & 0xffffff00;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  ppvVar3 = &local_68;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  ppvVar2 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x68))(param_1,local_res8,&local_38,ppvVar3,ppvVar2);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execStopContinuousInputInjectionForAction @ 14a708700

void __cdecl
IEnhancedInputSubsystemInterface::execStopContinuousInputInjectionForAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x80))(param_1,local_res8);
  return;
}

// execStopContinuousInputInjectionForPlayerMapping @ 14a708790

void __cdecl
IEnhancedInputSubsystemInterface::execStopContinuousInputInjectionForPlayerMapping
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x88))(param_1,local_res8);
  return;
}

// execUpdateValueOfContinuousInputInjectionForAction @ 14a709150

void __cdecl
IEnhancedInputSubsystemInterface::execUpdateValueOfContinuousInputInjectionForAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uStack_30 = uStack_30 & 0xffffff00;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = (undefined4)local_38;
  uStack_14 = local_38._4_4_;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  (**(code **)(*(longlong *)param_1 + 0x70))(param_1,local_res8,&local_28);
  return;
}

// execUpdateValueOfContinuousInputInjectionForPlayerMapping @ 14a709260

void __cdecl
IEnhancedInputSubsystemInterface::execUpdateValueOfContinuousInputInjectionForPlayerMapping
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uStack_30 = uStack_30 & 0xffffff00;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = (undefined4)local_38;
  uStack_14 = local_38._4_4_;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  (**(code **)(*(longlong *)param_1 + 0x78))(param_1,local_res8,&local_28);
  return;
}

// operator() @ 150552a80

bool __thiscall
`IEnhancedInputSubsystemInterface::RemoveMappingContext'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8810674947279027913>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8810674947279027913>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150552af8;
    }
  }
  bVar2 = false;
LAB_150552af8:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

