// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FPreloadableFile @ 1419175b0

FPreloadableFile * __thiscall
FPreloadableFile::FPreloadableFile(FPreloadableFile *this,TStringView<wchar_t> *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  FEvent *pFVar5;
  FString local_18;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  uVar2 = *(undefined8 *)&param_1->Size;
  pwVar3 = param_1->DataPtr;
  puVar1 = &this->field_0x90;
  *(undefined ***)this = &___7FPreloadableArchive__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  pFVar4 = ::FString::ConstructFromPtrSize(&local_18,pwVar3,(int)uVar2);
  if ((FString *)puVar1 != pFVar4) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this->field_0x98 = (pFVar4->Data).ArrayNum;
    *(int *)&this->field_0x9c = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined2 *)&this->field_0xb8 = 0;
  this->field_0xba = 0;
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xf0 = 0x10000;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->field_0xf8,4000);
  *(undefined2 *)&this->field_0x120 = 0;
  this->field_0x128 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  *(FEvent **)&this->field_0xb0 = pFVar5;
  (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5);
  (**(code **)(*(longlong *)this + 200))(this,1);
  (**(code **)(*(longlong *)this + 0x108))(this,1);
  *(undefined ***)this = &___7FPreloadableFile__6B_;
  pFVar4 = FPaths::CreateStandardFilename(&local_18,(FString *)puVar1);
  if ((FString *)puVar1 != pFVar4) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this->field_0x98 = (pFVar4->Data).ArrayNum;
    *(int *)&this->field_0x9c = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// InitializeAsync @ 141950570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPreloadableFile::InitializeAsync(FPreloadableFile *this,uint param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined ***pppuVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined1 auStackY_108 [32];
  code *local_d8 [2];
  undefined **local_c8;
  FPreloadableFile *local_c0;
  undefined ***local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FPreloadableFile *local_90;
  undefined ***local_80;
  undefined1 local_78 [40];
  longlong *local_50;
  undefined1 local_48 [40];
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((param_1 & 1) == 0) {
    local_48._0_8_ = 0;
    local_20 = (undefined ***)0x0;
    local_80 = (undefined ***)0x0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::`4'::<lambda_2>,1,0>::
                _vftable_;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPreloadableFile::InitializeAsync'::__l4::<lambda_2>,FArchive_*>
                  ::Call;
    local_90 = this;
    FPreloadableArchive::InitializeInternalAsync
              ((FPreloadableArchive *)this,(TUniqueFunction<FArchive_*___cdecl(void)> *)local_a8,
               (TUniqueFunction<IAsyncReadFileHandle_*___cdecl(void)> *)local_48,param_1,param_2);
    if (local_a8[0] != (code *)0x0) {
      pppuVar5 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar5 = local_80;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    if (local_48._0_8_ == 0) {
      return;
    }
    pppuVar5 = (undefined ***)(local_48 + 0x10);
    pppuVar3 = local_20;
  }
  else {
    if ((param_1 & 1) != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PreloadableFile.cpp"
                         ,0x2c4,L"Invalid mode %u.");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_b0 = (undefined ***)0x0;
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::`4'::<lambda_1>,1,0>::
                _vftable_;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPreloadableFile::InitializeAsync'::__l4::<lambda_1>,IAsyncReadFileHandle_*>
                  ::Call;
    local_78._0_8_ = 0;
    local_50 = (longlong *)0x0;
    local_c0 = this;
    FPreloadableArchive::InitializeInternalAsync
              ((FPreloadableArchive *)this,(TUniqueFunction<FArchive_*___cdecl(void)> *)local_78,
               (TUniqueFunction<IAsyncReadFileHandle_*___cdecl(void)> *)local_d8,param_1,param_2);
    if (local_78._0_8_ != 0) {
      plVar4 = (longlong *)(local_78 + 0x10);
      if (local_50 != (longlong *)0x0) {
        plVar4 = local_50;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_d8[0] == (code *)0x0) {
      return;
    }
    pppuVar5 = &local_c8;
    pppuVar3 = local_b0;
  }
  if (pppuVar3 != (undefined ***)0x0) {
    pppuVar5 = pppuVar3;
  }
  (*(code *)(*pppuVar5)[2])();
  return;
}

// TryRegister @ 141978730

bool __cdecl FPreloadableFile::TryRegister(TSharedPtr<FPreloadableFile,1> *param_1)

{
  int iVar1;
  FPreloadableFile *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  undefined1 *puVar11;
  longlong lVar12;
  int local_res8 [2];
  FString *local_res10;
  
  if ((param_1->Object != (FPreloadableFile *)0x0) && (param_1->Object->field_0xb8 != '\0')) {
    pwVar10 = L"";
    if ((param_1->Object == (FPreloadableFile *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (-1 < *(longlong *)&param_1->Object->field_0xa8) {
      if ((param_1->Object == (FPreloadableFile *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      puVar11 = &param_1->Object->field_0x90;
      iVar1 = *(int *)&param_1->Object->field_0x98;
      iVar9 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar9 = 0;
      }
      else {
        pwVar10 = *(wchar_t **)puVar11;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
      iVar9 = TSet<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>,FDefaultSetAllocator>
                          *)&RegisteredFiles,uVar8,(FString *)puVar11);
      if ((iVar9 == -1) || (lVar12 = RegisteredFiles._0_8_ + (longlong)iVar9 * 0x28, lVar12 == 0)) {
        local_res10 = (FString *)puVar11;
        TSet<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>,FDefaultSetAllocator>
                    *)&RegisteredFiles,(uint)local_res8,
                   (TKeyInitializer<FString_const_&> *)(ulonglong)uVar8,(bool *)&local_res10);
        lVar12 = RegisteredFiles._0_8_ + (longlong)local_res8[0] * 0x28;
      }
      pFVar2 = param_1->Object;
      if (*(FPreloadableFile **)(lVar12 + 0x10) == (FPreloadableFile *)0x0) {
        pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar5 = *(TReferenceControllerBase<1> **)(lVar12 + 0x18);
        *(FPreloadableFile **)(lVar12 + 0x10) = pFVar2;
        *(TReferenceControllerBase<1> **)(lVar12 + 0x18) = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        return true;
      }
      return *(FPreloadableFile **)(lVar12 + 0x10) == pFVar2;
    }
  }
  return false;
}

// TryTakeArchive @ 1419796b0

FArchive * __cdecl FPreloadableFile::TryTakeArchive(wchar_t *param_1)

{
  code *pcVar1;
  FPreloadableFile *pFVar2;
  bool bVar3;
  FString *pFVar4;
  FArchive *pFVar5;
  FArchiveState *pFVar6;
  ForAnyElementType FVar7;
  FArchiveState *pFVar8;
  FSharedReferencer<1> FVar9;
  atomic<int> *paVar10;
  FArchiveState *pFVar11;
  uint uStackX_14;
  FString local_48;
  TSharedPtr<FPreloadableFile,1> local_38;
  FString local_28;
  FString local_18;
  
  pFVar8 = (FArchiveState *)0x0;
  if (RegisteredFiles._8_4_ == RegisteredFiles._52_4_) {
    return (FArchive *)0x0;
  }
  ::FString::FString(&local_48,param_1);
  pFVar4 = FPaths::CreateStandardFilename(&local_18,&local_48);
  if (&local_48 != pFVar4) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  local_38.Object = (FPreloadableFile *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_28,(wchar_t *)FVar7.Data);
  bVar3 = TMap<FString,TSharedPtr<FPreloadableFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>_>
          ::RemoveAndCopyValue(&RegisteredFiles,&local_28,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar2 = local_38.Object;
  pFVar6 = pFVar8;
  if (bVar3) {
    if ((local_38.Object == (FPreloadableFile *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar1)();
      return pFVar5;
    }
    if (pFVar2->field_0xb8 != '\0') {
      if ((pFVar2 == (FPreloadableFile *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar1)();
        return pFVar5;
      }
      if (pFVar2->field_0xb8 == '\0') {
        (**(code **)(**(longlong **)&pFVar2->field_0xb0 + 0x20))
                  (*(longlong **)&pFVar2->field_0xb0,0xffffffff,0);
      }
      pFVar6 = *(FArchiveState **)&pFVar2->field_0xd8;
      *(undefined8 *)&pFVar2->field_0xd8 = 0;
      if (pFVar6 == (FArchiveState *)0x0) {
        pFVar6 = ::operator_new(0xa0);
        FVar9.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
        if (pFVar6 == (FArchiveState *)0x0) {
          FVar9.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStackX_14 << 0x20)
          ;
          pFVar11 = pFVar8;
        }
        else {
          if ((FFastPathLoadBuffer *)local_38.SharedReferenceCount.ReferenceController ==
              (FFastPathLoadBuffer *)0x0) {
            paVar10 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar10 = &(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar10 = (atomic<int>)((int)*paVar10 + 1);
            UNLOCK();
          }
          FArchiveState::FArchiveState(pFVar6);
          pFVar6->_padding_ = (longlong)&___7FPreloadableArchiveProxy__6B_;
          pFVar6[1]._padding_ = (longlong)pFVar2;
          pFVar6[1].ActiveFPLB =
               (FFastPathLoadBuffer *)local_38.SharedReferenceCount.ReferenceController;
          if ((FFastPathLoadBuffer *)FVar9.ReferenceController != (FFastPathLoadBuffer *)0x0) {
            LOCK();
            *paVar10 = (atomic<int>)((int)*paVar10 + 1);
            UNLOCK();
          }
          if ((pFVar6[1]._padding_ == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Archive",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\PreloadableFile.h"
                                 ,0xfb,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FArchive *)(*pcVar1)();
            return pFVar5;
          }
          pFVar8 = pFVar6;
          pFVar11 = (FArchiveState *)&DAT_00000001;
        }
        pFVar6 = pFVar8;
        if (pFVar11 != (FArchiveState *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar9.ReferenceController);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return (FArchive *)pFVar6;
}

// UnRegister @ 141979940

bool __cdecl FPreloadableFile::UnRegister(TSharedPtr<FPreloadableFile,1> *param_1)

{
  bool bVar1;
  FPreloadableFile *pFVar2;
  TPairInitializer<FString_const_&,TSharedPtr<FPreloadableFile,1>_&&> local_res8 [2];
  TSharedPtr<FPreloadableFile,1> local_28;
  undefined1 *local_18;
  TSharedPtr<FPreloadableFile,1> *local_10;
  
  if (param_1->Object == (FPreloadableFile *)0x0) {
    return false;
  }
  local_28.Object = (FPreloadableFile *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar1 = TMap<FString,TSharedPtr<FPreloadableFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>_>
          ::RemoveAndCopyValue(&RegisteredFiles,(FString *)&param_1->Object->field_0x90,&local_28);
  if (bVar1) {
    if (local_28.Object == param_1->Object) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return true;
    }
    pFVar2 = TSharedPtr<FPreloadableFile,1>::operator->(param_1);
    local_18 = &pFVar2->field_0x90;
    local_10 = &local_28;
    TSet<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FPreloadableFile,1>_&&>_>
              ((TSet<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>,FDefaultSetAllocator>
                *)&RegisteredFiles,local_res8,(bool *)&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return false;
}

