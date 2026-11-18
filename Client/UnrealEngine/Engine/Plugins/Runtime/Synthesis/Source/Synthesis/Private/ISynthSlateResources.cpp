// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 4

// ISynthSlateResources @ 14f0b9380

ISynthSlateResources * __thiscall
ISynthSlateResources::ISynthSlateResources(ISynthSlateResources *this)

{
  this->bResourcesLoaded = false;
  this->_padding_ = (longlong)&___7ISynthSlateResources__6B_;
  return this;
}

// ~ISynthSlateResources @ 14f0bf9a0

void __thiscall ISynthSlateResources::~ISynthSlateResources(ISynthSlateResources *this)

{
  this->_padding_ = (longlong)&___7ISynthSlateResources__6B_;
  return;
}

// GetImagesAtPath @ 14f0d9320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ISynthSlateResources::GetImagesAtPath
          (ISynthSlateResources *this,FString *param_1,
          TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_> *param_2,
          float param_3)

{
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  IFileManager *pIVar9;
  FSlateDynamicImageBrush *pFVar10;
  ForAnyElementType FVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  FString *pFVar14;
  FIdentityFunctor local_res8 [8];
  float local_res10;
  float local_res14;
  ISynthSlateResources *local_b8;
  FName local_b0;
  TRawPtrProxy<FSlateDynamicImageBrush> local_a8;
  FString *local_a0;
  undefined8 local_98;
  TSharedPtr<FSlateDynamicImageBrush,1> local_90;
  FString local_80;
  FLinearColor_u_0 local_70 [3];
  
  pIVar9 = IFileManager::Get();
  local_a0 = (FString *)0x0;
  local_98 = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar9 + 0x78))(pIVar9,&local_a0,pwVar13,L".png");
  local_b8 = this;
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_ISynthSlateResources::GetImagesAtPath_::__l2::<lambda_1>_>_>
            (local_a0,(int)local_98,local_res8[0],(<lambda_1> *)&local_b8);
  uVar5 = _UNK_15076b1f8;
  uVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  iVar6 = (int)local_98;
  pFVar14 = local_a0 + (int)local_98;
  pFVar12 = local_a0;
  while( true ) {
    if ((int)local_98 != iVar6) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar12 == pFVar14) break;
    local_90.Object = (FSlateDynamicImageBrush *)0x0;
    local_90.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    ::FString::ConcatFF(&local_80,param_1,pFVar12);
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar11.Data = local_80.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_b0,(wchar_t *)FVar11.Data);
    pFVar10 = ::operator_new(0xd0);
    if (pFVar10 == (FSlateDynamicImageBrush *)0x0) {
      pFVar10 = (FSlateDynamicImageBrush *)0x0;
    }
    else {
      local_70[0]._0_8_ = uVar4;
      local_70[0]._8_8_ = uVar5;
      local_res10 = param_3;
      local_res14 = param_3;
      pFVar10 = FSlateDynamicImageBrush::FSlateDynamicImageBrush
                          (pFVar10,local_b0,(FDeprecateVector2DParameter *)&local_res10,
                           (FLinearColor *)&local_70[0]._s_0,NoTile,FullColor);
      if ((((pFVar10 != (FSlateDynamicImageBrush *)0x0) && (*(longlong *)&pFVar10->field_0xb0 != 0))
          && (*(longlong *)&pFVar10->field_0xb8 != 0)) &&
         (0 < *(int *)(*(longlong *)&pFVar10->field_0xb8 + 8))) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    local_a8.Object = pFVar10;
    TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>(&local_90,&local_a8);
    pTVar1 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(param_2->AllocatorInstance).Data;
    if ((pTVar1 <= &local_90) && (&local_90 < pTVar1 + param_2->ArrayMax)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    pFVar2 = (param_2->AllocatorInstance).Data;
    *(FSlateDynamicImageBrush **)(pFVar2 + (longlong)iVar8 * 0x10) = local_90.Object;
    *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar8 * 0x10 + 8) =
         local_90.SharedReferenceCount.ReferenceController;
    if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    pFVar12 = pFVar12 + 1;
  }
  DestructItems<FString,int>(local_a0,(int)local_98);
  if (local_a0 != (FString *)0x0) {
    FMemory::Free(local_a0);
  }
  return;
}

// GetNumberForImageName @ 14f0da250

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
ISynthSlateResources::GetNumberForImageName(ISynthSlateResources *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ForAnyElementType _Str;
  FString local_38;
  FRegexMatcher local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&local_38,L"(?!2x)\\d+");
    FRegexPattern::FRegexPattern(&Digitpattern,&local_38,None);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    atexit(`ISynthSlateResources::GetNumberForImageName'::__l2::
           _dynamic_atexit_destructor_for__Digitpattern__);
    _Init_thread_footer(&::_TSS0);
  }
  FRegexMatcher::FRegexMatcher(&local_28,&Digitpattern,param_1);
  bVar1 = FRegexMatcher::FindNext(&local_28);
  if (bVar1) {
    iVar2 = FRegexMatcher::GetMatchBeginning(&local_28);
    iVar3 = FRegexMatcher::GetMatchEnding(&local_28);
    ::FString::Mid(param_1,&local_38,iVar2,iVar3 - iVar2);
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      _Str.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (1 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
    iVar2 = -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  return iVar2;
}

