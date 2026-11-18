// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 6

// StartupModule @ 14cfa71b0

void __thiscall FAppleImageUtilsPlugin::StartupModule(FAppleImageUtilsPlugin *this)

{
  return;
}

// ShutdownModule @ 14cfa71c0

void __thiscall FAppleImageUtilsPlugin::ShutdownModule(FAppleImageUtilsPlugin *this)

{
  return;
}

// ConvertToJPEG @ 14cfa71d0

TSharedPtr<FAppleImageUtilsConversionTaskBase,1> * __thiscall
FAppleImageUtilsPlugin::ConvertToJPEG
          (FAppleImageUtilsPlugin *this,
          TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *__return_storage_ptr__,UTexture *param_1
          ,int param_2,bool param_3,bool param_4,float param_5,ETextureRotationDirection param_6)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  longlong _Src;
  char cVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong *plVar6;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *pTVar9;
  TReferenceControllerBase<1> local_58;
  FString local_48;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> local_38;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> local_28;
  
  if (param_1 != (UTexture *)0x0) {
    pUVar5 = UAppleImageInterface::StaticClass();
    plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
    if (plVar6 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((((cVar3 != '\x01') && (cVar3 != '\x02')) && (cVar3 != '\x03')) && (cVar3 != '\x04')) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        ::FString::PrintfImpl(&local_48,L"ConvertToJPEG texture type (%d) was not supported");
        pTVar7 = MakeShared<FAppleImageUtilsFailedConversionTask,1,FString>(&local_38,&local_48);
        __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)pTVar7->Object;
        pTVar8 = (pTVar7->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      pTVar8 = ::operator_new(0x40);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)0x10;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFAppleImageUtilsFailedConversionTask___00_SharedPointerInternals__6B_
        ;
        ::FString::FString((FString *)&local_58,L"ConvertToJPEG requires iOS 10.0+ or macOS 10.12+")
        ;
        _Src = local_58._padding_;
        pTVar1 = pTVar8 + 3;
        pTVar8[2]._padding_ = 0;
        pTVar8[1]._padding_ = (longlong)&___7FAppleImageUtilsConversionTaskBase__6B_;
        pTVar8[1]._padding_ = (longlong)&___7FAppleImageUtilsFailedConversionTask__6B_;
        pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar1->_padding_ = 0;
        pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
        if ((pTVar1 != &local_58) &&
           (pTVar8[3].SharedReferenceCount = local_58.SharedReferenceCount,
           local_58.SharedReferenceCount != (atomic<int>)0x0)) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_58.SharedReferenceCount,0,(ForAnyElementType *)pTVar1,
                     (int)local_58.SharedReferenceCount,(int *)&pTVar8[3].WeakReferenceCount);
          memcpy((FScriptContainerElement *)pTVar1->_padding_,(void *)_Src,
                 (longlong)(int)local_58.SharedReferenceCount * 2);
        }
        LOCK();
        pTVar8[1].WeakReferenceCount = (atomic<int>)0x1;
        UNLOCK();
        LOCK();
        pTVar8[1].SharedReferenceCount = (atomic<int>)0x1;
        UNLOCK();
        if ((void *)local_58._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_58._padding_);
        }
        if (((FAppleImageUtilsConversionTaskBase *)(pTVar8 + 1) ==
             (FAppleImageUtilsConversionTaskBase *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)(*pcVar2)();
          return pTVar9;
        }
        __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)(pTVar8 + 1);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      return __return_storage_ptr__;
    }
  }
  pTVar7 = MakeShared<FAppleImageUtilsFailedConversionTask,1,wchar_t_const_(&)[66]>
                     (&local_28,
                      (wchar_t (*) [66])
                      L"ConvertToJPEG only supports UAppleImageInterface derived textures");
  __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)pTVar7->Object;
  pTVar8 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConvertToHEIF @ 14cfa7460

TSharedPtr<FAppleImageUtilsConversionTaskBase,1> * __thiscall
FAppleImageUtilsPlugin::ConvertToHEIF
          (FAppleImageUtilsPlugin *this,
          TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *__return_storage_ptr__,UTexture *param_1
          ,int param_2,bool param_3,bool param_4,float param_5,ETextureRotationDirection param_6)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  UClass *pUVar3;
  longlong *plVar4;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> *pTVar5;
  FString local_28;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> local_18;
  
  if (param_1 != (UTexture *)0x0) {
    pUVar3 = UAppleImageInterface::StaticClass();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
    if (plVar4 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if ((((cVar2 != '\x01') && (cVar2 != '\x02')) && (cVar2 != '\x03')) && (cVar2 != '\x04')) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        ::FString::PrintfImpl(&local_28,L"ConvertToHEIF texture type (%d) was not supported");
        pTVar5 = MakeShared<FAppleImageUtilsFailedConversionTask,1,FString>(&local_18,&local_28);
        __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)pTVar5->Object;
        pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      pTVar5 = MakeShared<FAppleImageUtilsFailedConversionTask,1,wchar_t_const_(&)[51]>
                         (&local_18,
                          (wchar_t (*) [51])L"ConvertToHEIF requires iOS 11.0+ or macOS 10.13.4+");
      goto LAB_14cfa7547;
    }
  }
  pTVar5 = MakeShared<FAppleImageUtilsFailedConversionTask,1,wchar_t_const_(&)[66]>
                     (&local_18,
                      (wchar_t (*) [66])
                      L"ConvertToHEIF only supports UAppleImageInterface derived textures");
LAB_14cfa7547:
  __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConvertToPNG @ 14cfa7580

TSharedPtr<FAppleImageUtilsConversionTaskBase,1> * __thiscall
FAppleImageUtilsPlugin::ConvertToPNG
          (FAppleImageUtilsPlugin *this,
          TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *__return_storage_ptr__,UTexture *param_1
          ,bool param_2,bool param_3,float param_4,ETextureRotationDirection param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong *plVar7;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *pTVar10;
  TReferenceControllerBase<1> local_58;
  TReferenceControllerBase<1> local_48;
  FString local_38;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> local_28;
  
  if (param_1 == (UTexture *)0x0) {
LAB_14cfa7721:
    pTVar9 = ::operator_new(0x40);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_14cfa7837:
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14cfa7844;
    }
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAppleImageUtilsFailedConversionTask___00_SharedPointerInternals__6B_
    ;
    ::FString::FString((FString *)&local_48,
                       L"ConvertToPNG only supports UAppleImageInterface derived textures");
    lVar3 = local_48._padding_;
    pTVar1 = pTVar9 + 3;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FAppleImageUtilsConversionTaskBase__6B_;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ = (longlong)&___7FAppleImageUtilsFailedConversionTask__6B_;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1->_padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar1 != &local_48) &&
       (pTVar9[3].SharedReferenceCount = local_48.SharedReferenceCount,
       local_48.SharedReferenceCount != (atomic<int>)0x0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_48.SharedReferenceCount,0,(ForAnyElementType *)pTVar1,
                 (int)local_48.SharedReferenceCount,(int *)&pTVar9[3].WeakReferenceCount);
      memcpy((FScriptContainerElement *)pTVar1->_padding_,(void *)lVar3,
             (longlong)(int)local_48.SharedReferenceCount * 2);
    }
    LOCK();
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    LOCK();
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    local_58._padding_ = local_48._padding_;
  }
  else {
    pUVar6 = UAppleImageInterface::StaticClass();
    plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    if (plVar7 == (longlong *)0x0) goto LAB_14cfa7721;
    cVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((((cVar4 != '\x01') && (cVar4 != '\x02')) && (cVar4 != '\x03')) && (cVar4 != '\x04')) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      ::FString::PrintfImpl(&local_38,L"ConvertToPNG texture type (%d) was not supported");
      pTVar8 = MakeShared<FAppleImageUtilsFailedConversionTask,1,FString>(&local_28,&local_38);
      __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)pTVar8->Object;
      pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    pTVar9 = ::operator_new(0x40);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_14cfa7837;
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAppleImageUtilsFailedConversionTask___00_SharedPointerInternals__6B_
    ;
    ::FString::FString((FString *)&local_58,L"ConvertToPNG requires iOS 11.0+ or macOS 10.13.4+");
    lVar3 = local_58._padding_;
    pTVar1 = pTVar9 + 3;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FAppleImageUtilsConversionTaskBase__6B_;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ = (longlong)&___7FAppleImageUtilsFailedConversionTask__6B_;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1->_padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar1 != &local_58) &&
       (pTVar9[3].SharedReferenceCount = local_58.SharedReferenceCount,
       local_58.SharedReferenceCount != (atomic<int>)0x0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_58.SharedReferenceCount,0,(ForAnyElementType *)pTVar1,
                 (int)local_58.SharedReferenceCount,(int *)&pTVar9[3].WeakReferenceCount);
      memcpy((FScriptContainerElement *)pTVar1->_padding_,(void *)lVar3,
             (longlong)(int)local_58.SharedReferenceCount * 2);
    }
    LOCK();
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x1;
    UNLOCK();
    LOCK();
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x1;
    UNLOCK();
  }
  if ((void *)local_58._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_58._padding_);
  }
  if (((FAppleImageUtilsConversionTaskBase *)(pTVar9 + 1) ==
       (FAppleImageUtilsConversionTaskBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)(*pcVar2)();
    return pTVar10;
  }
  __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)(pTVar9 + 1);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  LOCK();
  pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
  UNLOCK();
LAB_14cfa7844:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// ConvertToTIFF @ 14cfa7880

TSharedPtr<FAppleImageUtilsConversionTaskBase,1> * __thiscall
FAppleImageUtilsPlugin::ConvertToTIFF
          (FAppleImageUtilsPlugin *this,
          TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *__return_storage_ptr__,UTexture *param_1
          ,bool param_2,bool param_3,float param_4,ETextureRotationDirection param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  UClass *pUVar3;
  longlong *plVar4;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> *pTVar5;
  FString local_28;
  TSharedRef<FAppleImageUtilsFailedConversionTask,1> local_18;
  
  if (param_1 != (UTexture *)0x0) {
    pUVar3 = UAppleImageInterface::StaticClass();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
    if (plVar4 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if ((((cVar2 != '\x01') && (cVar2 != '\x02')) && (cVar2 != '\x03')) && (cVar2 != '\x04')) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        ::FString::PrintfImpl(&local_28,L"ConvertToTIFF texture type (%d) was not supported");
        pTVar5 = MakeShared<FAppleImageUtilsFailedConversionTask,1,FString>(&local_18,&local_28);
        __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)pTVar5->Object;
        pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      pTVar5 = MakeShared<FAppleImageUtilsFailedConversionTask,1,wchar_t_const_(&)[51]>
                         (&local_18,
                          (wchar_t (*) [51])L"ConvertToTIFF requires iOS 11.0+ or macOS 10.13.4+");
      goto LAB_14cfa7967;
    }
  }
  pTVar5 = MakeShared<FAppleImageUtilsFailedConversionTask,1,wchar_t_const_(&)[66]>
                     (&local_18,
                      (wchar_t (*) [66])
                      L"ConvertToTIFF only supports UAppleImageInterface derived textures");
LAB_14cfa7967:
  __return_storage_ptr__->Object = (FAppleImageUtilsConversionTaskBase *)pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

