// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 3

// CreateSP<FMediaCaptureSceneViewExtension> @ 14d782430

TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
          ::CreateSP<FMediaCaptureSceneViewExtension>
                    (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,FMediaCaptureSceneViewExtension *param_1,
                    pmf_2407dd4a *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
  *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = (TReferenceControllerBase<1> *)param_1->_padding_;
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pTVar13 = pTVar12;
    pTVar11 = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar8->SharedReferenceCount;
      do {
        pTVar11 = pTVar12;
        if (aVar5 == (atomic<int>)0x0) goto LAB_14d7824e5;
        LOCK();
        aVar6 = pTVar8->SharedReferenceCount;
        bVar14 = aVar5 == aVar6;
        if (bVar14) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar14);
      pTVar13 = (TReferenceControllerBase<1> *)param_1->_padding_;
      pTVar11 = pTVar8;
    }
LAB_14d7824e5:
    pTVar8 = (TReferenceControllerBase<1> *)&pTVar13->SharedReferenceCount;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = pTVar12;
    }
    if ((pTVar8 != (TReferenceControllerBase<1> *)&param_1->_padding_) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar14)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                *)(*pcVar2)();
      return pTVar9;
    }
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar9;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar9;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar10;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMediaCaptureSceneViewExtension___00__A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pTVar13;
    puVar7[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000007;
    puVar7[5] = uVar3;
    puVar7[6] = uVar4;
  }
  if (((ulonglong)pTVar12 & 4) != 0) {
    pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar12 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (((ulonglong)pTVar12 & 2) != 0) {
    pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar12 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (((ulonglong)pTVar12 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<FMediaIOCorePlayerBase> @ 14d782650

TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy> *
__cdecl TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
        ::CreateSP<FMediaIOCorePlayerBase>
                  (TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
                   *__return_storage_ptr__,FMediaIOCorePlayerBase *param_1,pmf_07ae9cc9 *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
  *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = (TReferenceControllerBase<1> *)param_1->_padding_;
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pTVar13 = pTVar12;
    pTVar11 = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar8->SharedReferenceCount;
      do {
        pTVar11 = pTVar12;
        if (aVar5 == (atomic<int>)0x0) goto LAB_14d782705;
        LOCK();
        aVar6 = pTVar8->SharedReferenceCount;
        bVar14 = aVar5 == aVar6;
        if (bVar14) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar14);
      pTVar13 = (TReferenceControllerBase<1> *)param_1->_padding_;
      pTVar11 = pTVar8;
    }
LAB_14d782705:
    pTVar8 = pTVar13 + 3;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = pTVar12;
    }
    if ((pTVar8 != (TReferenceControllerBase<1> *)&param_1->_padding_) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x69a,L""), bVar14)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)(*pcVar2)();
      return pTVar9;
    }
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar9;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar9;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar10;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVFMediaIOCorePlayerBase___00__A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pTVar13;
    puVar7[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000007;
    puVar7[5] = uVar3;
    puVar7[6] = uVar4;
  }
  if (((ulonglong)pTVar12 & 4) != 0) {
    pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar12 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (((ulonglong)pTVar12 & 2) != 0) {
    pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar12 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (((ulonglong)pTVar12 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// operator= @ 14d78d400

TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

