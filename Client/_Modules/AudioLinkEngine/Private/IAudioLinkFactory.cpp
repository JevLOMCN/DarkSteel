// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 8

// IAudioLinkFactory @ 1464cbcb0

/* WARNING: Enum "Type": Some values do not have unique names */

IAudioLinkFactory * __thiscall IAudioLinkFactory::IAudioLinkFactory(IAudioLinkFactory *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  ulonglong uVar3;
  int *piVar4;
  
  uVar3 = (ulonglong)_tls_index;
  *this = (IAudioLinkFactory)&___7IAudioLinkFactory__6B_;
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9d4c);
  if (*piVar4 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAutoConsoleVariableRef::FAutoConsoleVariableRef
                (&CVarAudioLinkEnabled,L"au.audiolink.enabled",&bAudioLinkEnabled,
                 L"Enable AudioLink",0);
      atexit(`AudioLinkFactory_Private::IsEnabled'::__l2::
             _dynamic_atexit_destructor_for__CVarAudioLinkEnabled__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (bAudioLinkEnabled != false) {
    pIVar2 = IModularFeatures::Get();
    pcVar1 = *(code **)((longlong)*pIVar2 + 0x28);
    if (*piVar4 < `public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'::__l2
          ::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"AudioLink Factory");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                     ::__l2::FeatureName,this + 1);
    return this;
  }
  if (2 < (byte)LogAudioLink._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioLink);
  }
  return this;
}

// ~IAudioLinkFactory @ 1464cc030

void __thiscall IAudioLinkFactory::~IAudioLinkFactory(IAudioLinkFactory *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  IAudioLinkFactory *pIVar2;
  
  *this = (IAudioLinkFactory)&___7IAudioLinkFactory__6B_;
  pIVar1 = IModularFeatures::Get();
  pIVar2 = this + 1;
  if (this == (IAudioLinkFactory *)0x0) {
    pIVar2 = (IAudioLinkFactory *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AudioLink Factory");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001464cc0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                    ::__l2::FeatureName,pIVar2);
  return;
}

// CreatePushableBufferListener @ 1464cc700

TSharedPtr<IBufferedAudioOutput,1> * __thiscall
IAudioLinkFactory::CreatePushableBufferListener
          (IAudioLinkFactory *this,TSharedPtr<IBufferedAudioOutput,1> *__return_storage_ptr__,
          FPushedBufferListenerCreateParams *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<IBufferedAudioOutput,1> *pTVar5;
  IBufferedAudioOutput *pIVar6;
  
  pTVar4 = ::operator_new(200);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IBufferedAudioOutput *)0x18;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TIntrusiveReferenceController<`IAudioLinkFactory::CreatePushableBufferListener'::`2'::FPushableSourceBufferListener,1>
          ::_vftable_;
    iVar1 = param_1->SizeOfBufferInFrames;
    pTVar4[1]._padding_ = (longlong)&___7ISourceBufferListener__6B_;
    FBufferedListenerBase::FBufferedListenerBase
              ((FBufferedListenerBase *)&pTVar4[1].SharedReferenceCount,iVar1);
    *(undefined4 *)&pTVar4[10]._padding_ = 0xffffffff;
    pTVar4[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[1]._padding_ =
         (longlong)
         &`IAudioLinkFactory::CreatePushableBufferListener'::`2'::FPushableSourceBufferListener::
          _vftable_;
    pTVar4[0xb]._padding_ = 0;
    *(undefined ***)&pTVar4[1].SharedReferenceCount =
         &`IAudioLinkFactory::CreatePushableBufferListener'::`2'::FPushableSourceBufferListener::
          _vftable_;
    pTVar4[0xc]._padding_ =
         (longlong)
         &`IAudioLinkFactory::CreatePushableBufferListener'::`2'::FPushableSourceBufferListener::
          _vftable_;
    pTVar4[0xb].SharedReferenceCount = (atomic<int>)0x0;
    if (pTVar4 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<IBufferedAudioOutput,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pIVar6 = (IBufferedAudioOutput *)&pTVar4[1].SharedReferenceCount;
    if (pTVar4 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) {
      pIVar6 = (IBufferedAudioOutput *)0x0;
    }
    __return_storage_ptr__->Object = pIVar6;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// CreateSourceBufferListener @ 1464cc830

TSharedPtr<IBufferedAudioOutput,1> * __thiscall
IAudioLinkFactory::CreateSourceBufferListener
          (IAudioLinkFactory *this,TSharedPtr<IBufferedAudioOutput,1> *__return_storage_ptr__,
          FSourceBufferListenerCreateParams *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<IBufferedAudioOutput,1> *pTVar5;
  UAudioComponent *this_00;
  IBufferedAudioOutput *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<ISourceBufferListener,1> local_28;
  
  pTVar4 = ::operator_new(0xc0);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBufferedSourceListener___00_SharedPointerInternals__6B_
    ;
    iVar1 = param_1->SizeOfBufferInFrames;
    pTVar4[1]._padding_ = (longlong)&___7ISourceBufferListener__6B_;
    FBufferedListenerBase::FBufferedListenerBase
              ((FBufferedListenerBase *)&pTVar4[1].SharedReferenceCount,iVar1);
    pTVar4[1]._padding_ = (longlong)&FBufferedSourceListener::_vftable__for__ISourceBufferListener__
    ;
    pTVar7 = pTVar4 + 1;
    *(undefined4 *)&pTVar4[10]._padding_ = 0xffffffff;
    *(undefined ***)&pTVar4[1].SharedReferenceCount =
         &FBufferedSourceListener::_vftable__for__FBufferedListenerBase__;
    pTVar4[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xb]._padding_ = 0;
    pTVar4[0xb].SharedReferenceCount = (atomic<int>)0x0;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<IBufferedAudioOutput,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  if (((param_1->AudioComponent).WeakPtr.ObjectIndex != 0) ||
     ((param_1->AudioComponent).WeakPtr.ObjectSerialNumber != 0)) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\IAudioLinkFactory.cpp"
                         ,0x2b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<IBufferedAudioOutput,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    this_00 = (UAudioComponent *)FWeakObjectPtr::Get(&(param_1->AudioComponent).WeakPtr);
    bVar3 = param_1->bShouldZeroBuffer;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = (ISourceBufferListener *)pTVar7;
    local_28.SharedReferenceCount.ReferenceController = pTVar4;
    UAudioComponent::SetSourceBufferListener(this_00,&local_28,bVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  pIVar6 = (IBufferedAudioOutput *)&pTVar7->SharedReferenceCount;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pIVar6 = (IBufferedAudioOutput *)0x0;
  }
  __return_storage_ptr__->Object = pIVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// CreateSubmixBufferListener @ 1464cc9c0

TSharedPtr<IBufferedAudioOutput,1> * __thiscall
IAudioLinkFactory::CreateSubmixBufferListener
          (IAudioLinkFactory *this,TSharedPtr<IBufferedAudioOutput,1> *__return_storage_ptr__,
          FSubmixBufferListenerCreateParams *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  FName *this_00;
  FString *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<IBufferedAudioOutput,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  wchar_t *pwVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined1 local_res8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FStringFormatArg local_38;
  
  this_00 = (FName *)(**(code **)((longlong)*this + 8))(this,local_res8);
  pFVar8 = ::FName::ToString(this_00,&local_48);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_38,pwVar12);
  local_68.ArrayNum = 1;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_68.AllocatorInstance.Data,&local_38,1)
  ;
  ::FString::FormatImpl(&local_58,L"IAudioLinkFactory:{0}",&local_68);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FStringFormatArg *)local_68.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pTVar9 = ::operator_new(200);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBufferedSubmixListener___00_SharedPointerInternals__6B_
    ;
    bVar7 = param_1->bShouldZeroBuffer;
    iVar3 = param_1->SizeOfBufferInFrames;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7ISubmixBufferListener__6B_;
    FBufferedListenerBase::FBufferedListenerBase
              ((FBufferedListenerBase *)&pTVar9[2].SharedReferenceCount,iVar3);
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    *(bool *)((longlong)&pTVar9[0xb]._padding_ + 4) = bVar7;
    pTVar9[1]._padding_ = (longlong)&FBufferedSubmixListener::_vftable__for__ISubmixBufferListener__
    ;
    paVar2 = &pTVar9[0xb].SharedReferenceCount;
    *(undefined4 *)((longlong)&pTVar9[0xc]._padding_ + 4) = 0;
    *(undefined ***)&pTVar9[2].SharedReferenceCount =
         &FBufferedSubmixListener::_vftable__for__FBufferedListenerBase__;
    *(uint *)&pTVar9[0xb]._padding_ = BufferedSubmixListenerPrivate::InvalidAudioDeviceId;
    pTVar9[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[0xb].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar9[0xc]._padding_ = 0;
    if ((paVar2 != (atomic<int> *)&local_58) &&
       (*(int *)&pTVar9[0xc]._padding_ = local_58.Data.ArrayNum, local_58.Data.ArrayNum != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)paVar2,local_58.Data.ArrayNum,
                 (int *)((longlong)&pTVar9[0xc]._padding_ + 4));
      memcpy(*(void **)paVar2,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
    }
    pTVar13 = pTVar9 + 1;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedPtr<IBufferedAudioOutput,1> *)(*pcVar6)();
        return pTVar10;
      }
      goto LAB_1464ccc6a;
    }
  }
  lVar4._0_4_ = pTVar13->SharedReferenceCount;
  lVar4._4_4_ = pTVar13->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar13[1]._padding_ == 0)) || (*(int *)(pTVar13[1]._padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar13->SharedReferenceCount = pTVar13;
    if (pTVar9 != (TReferenceControllerBase<1> *)pTVar13[1]._padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar13[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pTVar13[1]._padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_1464ccc6a:
  pTVar11 = (TReferenceControllerBase<1> *)&pTVar13[1].SharedReferenceCount;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  __return_storage_ptr__->Object = (IBufferedAudioOutput *)pTVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindFactory @ 1464ccd80

IAudioLinkFactory * __cdecl IAudioLinkFactory::FindFactory(FName param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  IAudioLinkFactory *pIVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<IAudioLinkFactory_*,TSizedDefaultAllocator<32>_> local_18;
  
  GetAllRegisteredFactories(&local_18);
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  FVar4.Data = local_18.AllocatorInstance.Data;
  do {
    if (FVar4.Data == pFVar1) {
      pIVar3 = (IAudioLinkFactory *)0x0;
LAB_1464ccdd3:
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return pIVar3;
    }
    pFVar2 = (FName *)(**(code **)(**(longlong **)FVar4.Data + 8))
                                (*(longlong **)FVar4.Data,local_res8);
    if (*pFVar2 == param_1) {
      pIVar3 = *(IAudioLinkFactory **)FVar4.Data;
      goto LAB_1464ccdd3;
    }
    FVar4.Data = FVar4.Data + 8;
  } while( true );
}

// GetAllRegisteredFactories @ 1464cce10

TArray<IAudioLinkFactory_*,TSizedDefaultAllocator<32>_> * __cdecl
IAudioLinkFactory::GetAllRegisteredFactories
          (TArray<IAudioLinkFactory_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  TArray<IAudioLinkFactory_*,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  ulonglong local_28 [2];
  ulonglong uVar11;
  
  pIVar7 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar7 + 8))(pIVar7);
  pIVar7 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AudioLink Factory");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar3 = `public:_static_class_FName___cdecl_IAudioLinkFactory::GetModularFeatureName(void)'::__l2
          ::FeatureName;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar5 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,FVar3);
  uVar11 = 0;
  if (0 < iVar5) {
    do {
      lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar3,uVar11);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_28[0] = lVar8 - 8;
      if (lVar8 == 0) {
        local_28[0] = 0;
      }
      if ((pFVar1 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 <
          pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<IAudioLinkFactory_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar9;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(ulonglong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_28[0];
    } while ((int)uVar10 < iVar5);
  }
  pIVar7 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  return __return_storage_ptr__;
}

// GetAllRegisteredFactoryNames @ 1464ccfe0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
IAudioLinkFactory::GetAllRegisteredFactoryNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<IAudioLinkFactory_*,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined8 local_38;
  TArray<IAudioLinkFactory_*,TSizedDefaultAllocator<32>_> local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar7 = GetAllRegisteredFactories(&local_30);
  pFVar9 = (pTVar7->AllocatorInstance).Data;
  iVar2 = pTVar7->ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar7->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IAudioLinkFactory_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar9 + 8))(*(longlong **)pFVar9,&local_38);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    pFVar9 = pFVar9 + 8;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_38;
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

