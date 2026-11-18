// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 2

// StartupModule @ 14eb00a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FNNERuntimeORTModule::StartupModule(FNNERuntimeORTModule *this)

{
  TSharedPtr<UE::NNERuntimeORT::Private::FEnvironment,1> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  Env EVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  IPluginManager *pIVar9;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 *puVar14;
  UClass *pUVar15;
  TWeakObjectPtr<UNNERuntimeORTDmlProxy,FWeakObjectPtr> TVar16;
  UObject *pUVar17;
  TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *pTVar18;
  FUObjectItem *pFVar19;
  uint uVar20;
  TReferenceControllerBase<1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint uVar23;
  FEnvironment *pFVar24;
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  undefined1 local_228;
  TSharedPtr<UE::NNERuntimeORT::Private::FEnvironment,1> local_220;
  FWeakObjectPtr local_208;
  INNERuntime *pIStack_200;
  FEnvironment *local_1f8;
  FSharedReferencer<1> local_1f0;
  FWeakObjectPtr local_1e8;
  INNERuntime *pIStack_1e0;
  UObject *local_1d8;
  UObject *local_1d0;
  UObject *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  FString local_1b0;
  wchar_t *local_1a0;
  int local_198;
  FEnvironment *local_190;
  TReferenceControllerBase<1> *local_188;
  FString local_180;
  FString local_170;
  TStringView<wchar_t> local_160;
  wchar_t *local_150;
  undefined4 local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  TReferenceControllerBase<1> *local_130;
  TWeakInterfacePtr<INNERuntime> local_128;
  TWeakInterfacePtr<INNERuntime> local_118;
  TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> local_108;
  TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> local_f8;
  undefined1 local_e8 [128];
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  pIVar9 = IPluginManager::Get();
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x68))(pIVar9,local_138,"NNERuntimeORT");
  if ((*plVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)(*(longlong *)*plVar10 + 0x20))((longlong *)*plVar10,&local_1a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  local_160.DataPtr = local_1a0;
  pTVar22 = (TReferenceControllerBase<1> *)0x0;
  local_148 = 0x35;
  uVar23 = 0;
  local_160.Size = local_198 - 1;
  if (local_198 == 0) {
    local_160.Size = uVar23;
  }
  local_150 = L"Binaries/ThirdParty/Onnxruntime/Win64/onnxruntime.dll";
  FPaths::CombineInternal(&local_170,&local_160,2);
  bVar7 = UE::NNERuntimeORT::Private::DllHelper::GetDllHandle(&local_170,&this->DllHandles);
  if (!bVar7) {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
    goto LAB_14eb011b7;
  }
  iVar2 = (this->DllHandles).ArrayNum;
  uVar20 = iVar2 - 1;
  uVar8 = uVar23;
  if ((int)uVar20 < iVar2) {
    uVar8 = ~uVar20 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_238 = (longlong)(int)uVar20;
    local_230 = (longlong)iVar2;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pvVar13 = *(void **)((this->DllHandles).AllocatorInstance.Data +
                      (longlong)(this->DllHandles).ArrayNum * 8 + -8);
  FWindowsPlatformProcess::GetModulesDirectory(&local_1b0);
  local_68.DataPtr = (wchar_t *)local_1b0.Data.AllocatorInstance.Data;
  local_50 = 8;
  local_40 = 0xc;
  local_68.Size = local_1b0.Data.ArrayNum - 1;
  if (local_1b0.Data.ArrayNum == 0) {
    local_68.Size = uVar23;
  }
  local_58 = L"DML/x64/";
  local_48 = L"DirectML.dll";
  FPaths::CombineInternal(&local_180,&local_68,3);
  local_228 = UE::NNERuntimeORT::Private::DllHelper::GetDllHandle(&local_180,&this->DllHandles);
  if ((!(bool)local_228) && (1 < (byte)LogNNERuntimeORT._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
  }
  pTVar11 = ::operator_new(0x20);
  pTVar21 = pTVar22;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    pTVar11->_padding_ = 0;
    pTVar11->SharedReferenceCount = (atomic<int>)0x0;
    pTVar11->WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[1]._padding_ = 0;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar21 = pTVar11;
  }
  pvVar12 = FWindowsPlatformProcess::GetDllExport(pvVar13,L"OrtGetApiBase");
  pTVar21->_padding_ = (longlong)pvVar12;
  pvVar12 = FWindowsPlatformProcess::GetDllExport
                      (pvVar13,L"OrtSessionOptionsAppendExecutionProvider_CPU");
  *(void **)&pTVar21->SharedReferenceCount = pvVar12;
  pvVar12 = FWindowsPlatformProcess::GetDllExport
                      (pvVar13,L"OrtSessionOptionsAppendExecutionProvider_DML");
  pTVar21[1]._padding_ = (longlong)pvVar12;
  pvVar13 = FWindowsPlatformProcess::GetDllExport
                      (pvVar13,L"OrtSessionOptionsAppendExecutionProviderEx_DML");
  *(void **)&pTVar21[1].SharedReferenceCount = pvVar13;
  if ((((pTVar21->_padding_ == 0) ||
       (lVar3._0_4_ = pTVar21->SharedReferenceCount, lVar3._4_4_ = pTVar21->WeakReferenceCount,
       lVar3 == 0)) || (pTVar21[1]._padding_ == 0)) || (pvVar13 == (void *)0x0)) {
    ::operator_delete(pTVar21,0x20);
    pTVar21 = pTVar22;
LAB_14eb0117b:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
  }
  else {
    ::operator_delete((void *)0x0,0x20);
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) goto LAB_14eb0117b;
    puVar14 = (undefined8 *)(*(code *)pTVar21->_padding_)();
    Ort::Global<void>::api_ = (OrtApi *)(*(code *)*puVar14)(0x14);
    pTVar11 = ::operator_new(0x50);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      local_220.Object = ___xmm_00000000000000000000000000000010;
      pFVar24 = (FEnvironment *)&DAT_00000010;
      local_220.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFEnvironment_Private_NNERuntimeORT_UE___00_SharedPointerInternals__6B_
      ;
      pTVar11[1]._padding_ = 0;
      pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar11[2]._padding_ = 0;
      pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar11[3]._padding_ = 0;
      pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar11[4]._padding_ = 0;
      pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&pTVar11[2].SharedReferenceCount,4000);
      pFVar24 = (FEnvironment *)(pTVar11 + 1);
      if ((pFVar24 == (FEnvironment *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      local_220.SharedReferenceCount.ReferenceController = pTVar11;
      pTVar22 = pTVar11;
      local_220.Object = pFVar24;
    }
    this_00 = &this->Environment;
    if (this_00 != &local_220) {
      this_00->Object = pFVar24;
      local_220.Object = (FEnvironment *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Environment).SharedReferenceCount,&local_220.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_220.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
    if ((this_00->Object == (FEnvironment *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar24 = this_00->Object;
    pUVar15 = UNNERuntimeORTSettings::StaticClass();
    if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar15);
    }
    lpCriticalSection = &pFVar24->CriticalSection;
    auVar1 = *(undefined1 (*) [16])&(pUVar15->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20;
    local_1c0 = CONCAT31(local_1c0._1_3_,auVar1[0]);
    uStack_1bc = auVar1._4_4_;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar4 = pFVar24->OrtEnvironment;
    (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)0x0);
    if ((EVar4 != (Env)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("OrtEnvironment == Ort::Env(nullptr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTEnv.cpp"
                           ,0x12,L"Ort::Env already created!"), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pFVar24->Config).bUseGlobalThreadPool = (bool)(char)local_1c0;
    *(int3 *)&(pFVar24->Config).field_0x1 = (int3)((uint)local_1c0 >> 8);
    (pFVar24->Config).IntraOpNumThreads = uStack_1bc;
    (pFVar24->Config).InterOpNumThreads = auVar1._8_4_;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar6 = local_228;
    TVar16 = UE::NNERuntimeORT::Private::MakeRuntimeDml(SUB81(local_140,0));
                    /* WARNING: Load size is inaccurate */
    (this->NNERuntimeORTDml).WeakPtr = *TVar16.WeakPtr;
    bVar7 = FWeakObjectPtr::IsValid(&(this->NNERuntimeORTDml).WeakPtr);
    if (bVar7) {
      pUVar17 = FWeakObjectPtr::Get(&(this->NNERuntimeORTDml).WeakPtr);
      local_208.ObjectIndex = 0;
      local_208.ObjectSerialNumber = 0;
      if (pUVar17 == (UObject *)0x0) {
        pIStack_200 = (INNERuntime *)0x0;
      }
      else {
        pUVar15 = Z_Construct_UClass_UNNERuntime_NoRegister();
        pIStack_200 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar17,pUVar15)
        ;
        if (pIStack_200 != (INNERuntime *)0x0) {
          local_1d8 = pUVar17;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar17);
          }
          FWeakObjectPtr::operator=(&local_208,(FObjectPtr)&local_1d8);
        }
      }
      pUVar17 = FWeakObjectPtr::Get(&(this->NNERuntimeORTDml).WeakPtr);
      pTVar18 = TSharedPtr<UE::NNERuntimeORT::Private::FEnvironment,1>::ToSharedRef
                          (this_00,&local_108);
      plVar10 = *(longlong **)&pUVar17[1].field_0x8;
      local_188 = (pTVar18->SharedReferenceCount).ReferenceController;
      pcVar5 = *(code **)(*plVar10 + 0x30);
      local_190 = pTVar18->Object;
      if (local_188 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_188->SharedReferenceCount = (atomic<int>)((int)local_188->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar5)(plVar10,&local_190,uVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar18->SharedReferenceCount).ReferenceController);
      pUVar17 = FWeakObjectPtr::Get(&(this->NNERuntimeORTDml).WeakPtr);
      pFVar19 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar17->field_0xc);
      FUObjectItem::SetRootFlags(pFVar19,RootSet);
      local_128.ObjectInstance.WeakPtr = local_208;
      local_128.InterfaceInstance = pIStack_200;
      UE::NNE::RegisterRuntime(&local_128);
    }
    pUVar17 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar17,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar15 = UNNERuntimeORTCpu::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_e8,pUVar15);
    local_e8._8_8_ = pUVar17;
    local_1d0 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
    if (local_e8._64_8_ != 0) {
      plVar10 = (longlong *)(local_e8 + 0x50);
      if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_e8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_1d0);
    }
    FWeakObjectPtr::operator=(&(this->NNERuntimeORTCpu).WeakPtr,(FObjectPtr)&local_1d0);
    bVar7 = FWeakObjectPtr::IsValid(&(this->NNERuntimeORTCpu).WeakPtr);
    if (bVar7) {
      pUVar17 = FWeakObjectPtr::Get(&(this->NNERuntimeORTCpu).WeakPtr);
      local_1e8.ObjectIndex = 0;
      local_1e8.ObjectSerialNumber = 0;
      if (pUVar17 == (UObject *)0x0) {
        pIStack_1e0 = (INNERuntime *)0x0;
      }
      else {
        pUVar15 = Z_Construct_UClass_UNNERuntime_NoRegister();
        pIStack_1e0 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar17,pUVar15)
        ;
        if (pIStack_1e0 != (INNERuntime *)0x0) {
          local_1c8 = pUVar17;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar17);
          }
          FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)&local_1c8);
        }
      }
      pUVar17 = FWeakObjectPtr::Get(&(this->NNERuntimeORTCpu).WeakPtr);
      pTVar18 = TSharedPtr<UE::NNERuntimeORT::Private::FEnvironment,1>::ToSharedRef
                          (this_00,&local_f8);
      local_1f0.ReferenceController = (pTVar18->SharedReferenceCount).ReferenceController;
      local_1f8 = pTVar18->Object;
      if (local_1f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1f0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_1f0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((FEnvironment **)&pUVar17[1].field_0x10 != &local_1f8) {
        *(FEnvironment **)&pUVar17[1].field_0x10 = local_1f8;
        local_1f8 = (FEnvironment *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pUVar17[1].field_0x18,&local_1f0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar18->SharedReferenceCount).ReferenceController);
      pUVar17 = FWeakObjectPtr::Get(&(this->NNERuntimeORTCpu).WeakPtr);
      pFVar19 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar17->field_0xc);
      FUObjectItem::SetRootFlags(pFVar19,RootSet);
      local_118.ObjectInstance.WeakPtr = local_1e8;
      local_118.InterfaceInstance = pIStack_1e0;
      UE::NNE::RegisterRuntime(&local_118);
    }
  }
  ::operator_delete(pTVar21,0x20);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
LAB_14eb011b7:
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_1a0 != (wchar_t *)0x0) {
    FMemory::Free(local_1a0);
  }
  return;
}

// ShutdownModule @ 14eb01220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FNNERuntimeORTModule::ShutdownModule(FNNERuntimeORTModule *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FUObjectItem *pFVar7;
  FScriptContainerElement *pFVar8;
  UObject *local_res8;
  FWeakObjectPtr local_48;
  INNERuntime *pIStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  TWeakInterfacePtr<INNERuntime> local_28;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->NNERuntimeORTCpu).WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->NNERuntimeORTCpu).WeakPtr);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (pUVar5 == (UObject *)0x0) {
      pIStack_40 = (INNERuntime *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UNNERuntime_NoRegister();
      pIStack_40 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar5,pUVar6);
      if (pIStack_40 != (INNERuntime *)0x0) {
        local_res8 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res8);
      }
    }
    local_28.ObjectInstance.WeakPtr = local_48;
    local_28.InterfaceInstance = pIStack_40;
    UE::NNE::UnregisterRuntime(&local_28);
    pUVar5 = FWeakObjectPtr::Get(&(this->NNERuntimeORTCpu).WeakPtr);
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar5->field_0xc);
    FUObjectItem::ClearRootFlags(pFVar7,RootSet);
    (this->NNERuntimeORTCpu).WeakPtr = (FWeakObjectPtr)0x0;
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->NNERuntimeORTDml).WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->NNERuntimeORTDml).WeakPtr);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (pUVar5 == (UObject *)0x0) {
      pIStack_40 = (INNERuntime *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UNNERuntime_NoRegister();
      pIStack_40 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar5,pUVar6);
      if (pIStack_40 != (INNERuntime *)0x0) {
        local_res8 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res8);
      }
    }
    local_28.ObjectInstance.WeakPtr = local_48;
    local_28.InterfaceInstance = pIStack_40;
    UE::NNE::UnregisterRuntime(&local_28);
    pUVar5 = FWeakObjectPtr::Get(&(this->NNERuntimeORTDml).WeakPtr);
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar5->field_0xc);
    FUObjectItem::ClearRootFlags(pFVar7,RootSet);
    (this->NNERuntimeORTDml).WeakPtr = (FWeakObjectPtr)0x0;
  }
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Environment != (TSharedPtr<UE::NNERuntimeORT::Private::FEnvironment,1> *)&local_38) {
    (this->Environment).Object = (FEnvironment *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Environment).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  pFVar8 = (this->DllHandles).AllocatorInstance.Data;
  iVar3 = (this->DllHandles).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->DllHandles).ArrayNum != iVar3) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (pFVar8 == pFVar2) break;
    FWindowsPlatformProcess::FreeDllHandle(*(HMODULE *)pFVar8);
    pFVar8 = pFVar8 + 8;
  }
  piVar1 = &(this->DllHandles).ArrayMax;
  (this->DllHandles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DllHandles).AllocatorInstance,0,piVar1);
  }
  return;
}

